//by DFS
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool checkCycleDFS(int node,
                       vector<char> &visited,
                       vector<char> &inStack,
                       const vector<vector<int>> &adj) {
        visited[node] = 1;
        inStack[node] = 1;
        for (int neighbour : adj[node]) {
            if (!visited[neighbour]) {
                if (checkCycleDFS(neighbour, visited, inStack, adj))
                    return true;
            } else if (inStack[neighbour]) {
                // visited and still in current DFS recursion stack -> cycle
                return true;
            }
        }
        inStack[node] = 0; // backtrack
        return false;
    }
    bool isCyclic(int V, vector<vector<int>> &edges) {
        // Build adjacency list for 0-based nodes
        vector<vector<int>> adj(V);
        for (const auto &e : edges) {
            int u = e[0];
            int v = e[1];
            // If input might be 1-based, convert: u--, v--;
            adj[u].push_back(v);
        }
        vector<char> visited(V, 0), inStack(V, 0);
        for (int i = 0; i < V; ++i) {
            if (!visited[i]) {
                if (checkCycleDFS(i, visited, inStack, adj))
                    return true;
            }
        }
        return false;
    }
 };
//By BFS
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isCyclic(int V, vector<vector<int>> &edges) {
        /*
         * ------------------------------------------------------------
         * Kahn's Algorithm (BFS) for Cycle Detection in Directed Graph
         * ------------------------------------------------------------
         *
         * Idea:
         *  - In a Directed Acyclic Graph (DAG), topological sorting
         *    will include all vertices exactly once.
         *  - If the graph contains a cycle, then some vertices will
         *    never have indegree = 0 (they’re part of the cycle).
         *  - Hence, if after processing all possible nodes via BFS,
         *    count of processed nodes < V → cycle exists.
         */
        // Step 1️⃣: Build adjacency list and indegree array
        vector<vector<int>> adj(V);     // adjacency list
        vector<int> indegree(V, 0);     // indegree of each node
        for (const auto &e : edges) {
            int u = e[0];
            int v = e[1];
            // If input is 1-based, uncomment below:
            // u--; v--;
            adj[u].push_back(v);  // Directed edge u -> v
            indegree[v]++;        // Increment indegree of v
        }
        // Step 2️⃣: Initialize queue with all nodes having indegree = 0
        queue<int> q;
        for (int i = 0; i < V; ++i) {
            if (indegree[i] == 0)
                q.push(i);
        }
        // Step 3️⃣: Perform BFS (Topological Sort)
        int processedCount = 0; // to count number of nodes processed
        while (!q.empty()) {
            int front = q.front();
            q.pop();
            processedCount++;  // node processed
            // Reduce indegree of all its neighbours
            for (int neighbour : adj[front]) {
                indegree[neighbour]--;
                // If indegree becomes zero, push to queue
                if (indegree[neighbour] == 0)
                    q.push(neighbour);
            }
        }
        // Step 4️⃣: Check if a cycle exists
        // If all vertices are processed => no cycle (DAG)
        // If some remain unprocessed => cycle exists
        if (processedCount == V)
            return false;  // No cycle
        else
            return true;   // Cycle detected
    }
};
