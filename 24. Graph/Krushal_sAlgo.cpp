// MST
class Solution
{
public:
    // for custom comprator (sort by weight)
    static bool cmp(vector<int> &a, vector<int> &b)
    {
        return a[2] < b[2];
    }
    void makeSet(vector<int> &parent, vector<int> &rank, int n)
    {
        for (int i = 0; i < n; i++)
        {
            parent[i] = i;
            rank[i] = 0;
        }
    }
    int findParent(vector<int> &parent, int node)
    {
        if (parent[node] == node)
        {
            return node;
        }
        //   return findParent(parent,parent[node]);//without path compression
        return parent[node] = findParent(parent, parent[node]); // with path compression
    }
    void unionSet(int u, int v, vector<int> &parent, vector<int> &rank)
    {
        u = findParent(parent, u);
        v = findParent(parent, v);
        if (rank[u] < rank[v])
        {
            parent[u] = v;
        }
        else if (rank[u] > rank[v])
        {
            parent[v] = u;
        }
        else
        {
            parent[v] = u;
            rank[u]++;
        }
    }
    int kruskalsMST(int V, vector<vector<int>> &edges)
    {
        vector<int> parent(V);
        vector<int> rank(V);
        makeSet(parent, rank, V);
        int minWeight = 0;
        sort(edges.begin(), edges.end(), cmp);
        for (int i = 0; i < edges.size(); i++)
        {
            int u = findParent(parent, edges[i][0]);
            int v = findParent(parent, edges[i][1]);
            int wt = edges[i][2];
            if (u != v)
            {
                minWeight += wt;
                unionSet(u, v, parent, rank);
            }
        }
        return minWeight;
    }
};