// User function Template for C++
class Solution
{
public:
    vector<int> bellmanFord(int V, vector<vector<int>> &edges, int src)
    {
        vector<int> dist(V, 1e8);
        dist[src] = 0;
        // n-1 times
        for (int i = 0; i < V - 1; i++)
        {
            // traverse on edge list
            for (int j = 0; j < edges.size(); j++)
            {
                int u = edges[j][0];
                int v = edges[j][1];
                int wt = edges[j][2];
                if (dist[u] != 1e8 && (dist[u] + wt) < dist[v])
                {
                    dist[v] = dist[u] + wt;
                }
            }
        }
        // check for negative cycle
        for (int j = 0; j < edges.size(); j++)
        {
            int u = edges[j][0];
            int v = edges[j][1];
            int wt = edges[j][2];
            if (dist[u] != 1e8 && (dist[u] + wt) < dist[v])
            {
                dist.clear(); // remove everything
                dist.push_back(-1);
            }
        }
        return dist;
    }
};
