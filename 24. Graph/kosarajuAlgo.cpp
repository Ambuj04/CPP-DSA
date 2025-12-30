// strongly connected component
// Position this line where user code will be pasted.
class Solution
{
public:
    void dfs(int node, unordered_map<int, bool> &vis,
             stack<int> &st, vector<vector<int>> &adj)
    {
        vis[node] = true;
        for (auto nbr : adj[node])
        {
            if (!vis[nbr])
            {
                dfs(nbr, vis, st, adj);
            }
        }
        st.push(node);
    }
    void revdfs(int node, unordered_map<int, bool> &vis,
                unordered_map<int, list<int>> &adj)
    {
        vis[node] = true;
        for (auto nbr : adj[node])
        {
            if (!vis[nbr])
            {
                revdfs(nbr, vis, adj);
            }
        }
    }
    int kosaraju(vector<vector<int>> &adj)
    {
        // topo
        stack<int> st;
        unordered_map<int, bool> vis;
        for (int i = 0; i < adj.size(); i++)
        {
            if (!vis[i])
            {
                dfs(i, vis, st, adj);
            }
        }
        // create a transpose graph
        unordered_map<int, list<int>> transpose;
        for (int i = 0; i < adj.size(); i++)
        {
            vis[i] = false;
            for (auto nbr : adj[i])
            {
                transpose[nbr].push_back(i);
            }
        }
        // dfs using above ordering
        int count = 0;
        while (!st.empty())
        {
            int top = st.top();
            st.pop();
            if (!vis[top])
            {
                count++;
                revdfs(top, vis, transpose);
            }
        }
        return count;
    }
};