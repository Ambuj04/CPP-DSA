//MST
class Solution
{
public:
    int spanningTree(int V, vector<vector<int>> &edges)
    {
        // create adj list
        unordered_map<int, list<pair<int, int>>> adj;
        for (int i = 0; i < edges.size(); i++)
        {
            int u = edges[i][0];
            int v = edges[i][1];
            int w = edges[i][2];
            adj[u].push_back(make_pair(v, w));
            adj[v].push_back(make_pair(u, w));
        }
        // data structure needed
        vector<int> key(V, INT_MAX); // store min weight for nodes which is in mst
        vector<bool> mst(V, false);  // store nodes for mst
        vector<int> parent(V, -1);   // store parent of nodes which is in mst
        // start the algo
        int src = 0; // start from 0
        key[src] = 0;
        parent[src] = -1;
        // Run for each vertex
        for (int i = 0; i < V; i++)
        {
            int mini = INT_MAX;
            int u; // used as index for marking min node as true in visted
            for (int v = 0; v < V; v++)
            {
                // check minimum value of key for processing
                if (mst[v] == false && key[v] < mini)
                {
                    u = v;
                    mini = key[v];
                }
            }
            // mark min node as true
            mst[u] = true;
            // chech its adj nodes
            for (auto it : adj[u])
            {
                int v = it.first;
                int w = it.second;
                if (mst[v] == false && w < key[v])
                {
                    parent[v] = u;
                    key[v] = w;
                }
            }
        }
        int ans = 0; // used as total weight
        for (int i = 0; i < V; i++)
        {
            ans += key[i];
        };
        return ans;
    }
};