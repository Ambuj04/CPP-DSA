class Solution
{
public:
    void BFS(vector<vector<int>> &adj, unordered_map<int, bool> &visited, vector<int> &ans, int node)
    {
        queue<int> q;
        q.push(node);
        visited[node] = 1;
        while (!q.empty())
        {
            int frontNode = q.front();
            q.pop();
            // store front node in ans
            ans.push_back(frontNode);
            // traverse all neighour of front node
            for (auto i : adj[frontNode])
            {
                if (!visited[i])
                {
                    q.push(i);
                    visited[i] = 1;
                }
            }
        }
    }
    vector<int> bfs(vector<vector<int>> &adj)
    {
        // adjacency list is prepared
        // traverse all components of a graph
        int vertex = adj.size();
        vector<int> ans;
        unordered_map<int, bool> visited;

        //This loop is required for disconnected graph and for connected only BFS() is enough
        for (int i = 0; i < vertex; i++)
        {
            if (!visited[i])
            {
                BFS(adj, visited, ans, i);
            }
        }
        return ans;
    }
}; 