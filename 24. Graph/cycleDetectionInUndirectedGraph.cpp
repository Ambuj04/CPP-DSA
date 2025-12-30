#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // ---------- DFS-based cycle detection ----------
    // Returns true if a cycle is found starting from `node`
    bool dfsCycle(int node, int parent, vector<int>& visited, const vector<vector<int>>& adj) {
        visited[node] = 1;
        for (int nbr : adj[node]) {
            if (!visited[nbr]) {
                if (dfsCycle(nbr, node, visited, adj))
                    return true;
            } else if (nbr != parent) {
                // visited neighbor which is not parent -> cycle
                return true;
            }
        }
        return false;
    }

    // ---------- BFS-based cycle detection ----------
    // Returns true if a cycle is found starting from src using BFS + parent tracking
    bool bfsCycle(int src, vector<int>& visited, const vector<vector<int>>& adj) {
        vector<int> parent(visited.size(), -1);
        queue<int> q;
        q.push(src);
        visited[src] = 1;
        parent[src] = -1;

        while (!q.empty()) {
            int node = q.front();
            q.pop();

            for (int nbr : adj[node]) {
                if (!visited[nbr]) {
                    visited[nbr] = 1;
                    parent[nbr] = node;
                    q.push(nbr);
                } else if (parent[node] != nbr) {
                    // visited neighbor not equal to parent -> cycle
                    return true;
                }
            }
        }
        return false;
    }

    // Public API: detect cycle in an undirected graph given V and edge list
    bool isCycle(int V, const vector<vector<int>>& edges) {
        // Build adjacency list
        vector<vector<int>> adj(V);
        for (const auto &e : edges) {
            int u = e[0];
            int v = e[1];
            // assuming undirected graph and 0-indexed vertices
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        // visited: 0 = unvisited, 1 = visited
        vector<int> visited(V, 0);

        // If graph is disconnected, run from every component
        for (int i = 0; i < V; ++i) {
            if (!visited[i]) {
                // Choose one: DFS or BFS check. I'll use DFS here.
                if (dfsCycle(i, -1, visited, adj))
                    return true;

                // If you prefer BFS, comment out the DFS call and uncomment next:
                // if (bfsCycle(i, visited, adj)) return true;
            }
        }
        return false;
    }
};
