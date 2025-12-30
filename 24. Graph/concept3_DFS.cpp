class Solution
{
public:
    void DFS(unordered_map<int, bool> &visited, vector<vector<int>> &adj, vector<int> &ans, int node)
    {
        ans.push_back(node);
        visited[node] = true;
        // har connected node k liye recursice call
        for (auto i : adj[node])
        {
            if (!visited[i])
            {
                DFS(visited, adj, ans, i);
            }
        }
    }
    vector<int> dfs(vector<vector<int>> &adj)
    {
        // Code here
        vector<int> ans;
        unordered_map<int, bool> visited;
        // for connnected node outer loop is not required
        DFS(visited, adj, ans, 0);
        return ans;
    }
};