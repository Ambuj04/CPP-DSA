class Solution {
public:
    // DFS helper that finds bridges using discovery (disc) and low-link (low) times.
    // - result: collects bridges as pairs [u, v]
    // - node: current node in DFS
    // - parent: parent of current node in DFS tree
    // - timer: global counter for discovery times (passed by reference)
    // - disc: discovery time for each node
    // - low: lowest discovery time reachable from the node's subtree
    // - vis: visited flag map
    // - adj: adjacency list
    void dfs(vector<vector<int>>& result,
             int node,
             int parent,
             int &timer,
             vector<int>& disc,
             vector<int>& low,
             unordered_map<int,bool>& vis,
             unordered_map<int,list<int>>& adj) {

        // mark current node visited
        vis[node] = true;

        // set discovery time and initialize low to the same value, then increment timer
        disc[node] = low[node] = timer++;

        // explore neighbours
        for (auto nbr : adj[node]) {
            // if neighbor is the parent in DFS tree, skip it
            if (nbr == parent) {
                continue;
            }
            // if neighbor is not visited, recursively DFS
            else if (!vis[nbr]) {
                dfs(result, nbr, node, timer, disc, low, vis, adj);
 
                // after visiting child, update low-link of current node
                low[node] = min(low[node], low[nbr]);

                // bridge condition:
                // if child cannot reach any ancestor of current node (low[nbr] > disc[node])
                // then edge (node, nbr) is a bridge
                if (low[nbr] > disc[node]) {
                    vector<int> ans;
                    ans.push_back(node);
                    ans.push_back(nbr);
                    result.push_back(ans); // record this bridge
                }
            } else {
                // else neighbour is visited and not parent -> back edge
                // update low with discovery time of the visited neighbour
                low[node] = min(low[node], disc[nbr]);
            }
        }
    }

    // Main function to determine if edge (c, d) is a bridge in an undirected graph.
    bool isBridge(int V, vector<vector<int>> &edges, int c, int d) {
        // NOTE: This implementation assumes vertices are 0-based in range [0, V-1].
        // If edges use 1-based indexing, decrement u and v before building adj.

        // Build adjacency list from edges
        unordered_map<int,list<int>> adj;
        for (int i = 0; i < edges.size(); i++) {
            int u = edges[i][0];
            int v = edges[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        // will hold all bridges as [u, v]
        vector<vector<int>> result;

        int timer = 0;                     // global discovery time counter
        vector<int> disc(V, -1);          // discovery times, -1 means unvisited
        vector<int> low(V, -1);           // low-link values
        int parent = -1;                  // initial parent for root DFS calls
        unordered_map<int,bool> vis;      // visited map (unordered_map used to match your original code)

        // run DFS from every unvisited node (handles disconnected graphs)
        for (int i = 0; i < V; i++) {
            if (!vis[i]) {
                dfs(result, i, parent, timer, disc, low, vis, adj);
            }
        }

        // After DFS, 'result' contains all bridges. Check if (c,d) is present.
        for (int i = 0; i < result.size(); i++) {
            int a = result[i][0];
            int b = result[i][1];

            // check both orders because graph is undirected
            if ((a == c && b == d) || (a == d && b == c)) {
                return true;
            }
        }
        return false;
    }
};
