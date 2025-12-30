#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> topoSort(int V, vector<vector<int>> &edges)
    {
        // Kahn’s Algorithm for Topological Sort (BFS-based)
        // --------------------------------------------------
        // V = number of vertices
        // edges = list of directed edges [u, v]
        // Goal: return a topological order of nodes (if DAG)
        // Step 1️⃣: Build adjacency list
        int E = edges.size();
        unordered_map<int, list<int>> adj;
        for (int i = 0; i < E; i++)
        {
            int u = edges[i][0];
            int v = edges[i][1];
            // Directed edge: u -> v
            adj[u].push_back(v);
        }
        // Step 2️⃣: Compute indegree (number of incoming edges) for each node
        vector<int> indegree(V, 0);
        for (auto i : adj)
        {
            for (auto j : i.second)
            {
                indegree[j]++;
            }
        }
        // Step 3️⃣: Push all nodes with indegree = 0 into the queue
        queue<int> q;
        for (int i = 0; i < V; i++)
        {
            if (indegree[i] == 0)
            {
                q.push(i);
            }
        }
        // Step 4️⃣: Process queue (BFS)
        // Pop node, append to answer, and decrease indegree of its neighbours
        vector<int> ans;
        while (!q.empty())
        {
            int front = q.front();
            q.pop();
            ans.push_back(front);
            // Traverse neighbours of current node
            for (auto neighbour : adj[front])
            {
                // Decrease indegree since edge front->neighbour is "removed"
                indegree[neighbour]--;
                // If indegree becomes 0, push into queue
                if (indegree[neighbour] == 0)
                {
                    q.push(neighbour);
                }
            }
        }
        // Step 5️⃣: If all vertices are processed, return ans.
        // If not (ans.size() < V), graph has a cycle (no valid topo sort)
        return ans;
    }
};
