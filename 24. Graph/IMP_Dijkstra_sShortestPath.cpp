// User Function Template
class Solution
{
public:
  vector<int> dijkstra(int V, vector<vector<int>> &edges, int src)
  {
    int vertice = V;
    int edge = edges.size();
    int source = src;
    // create adjacency list
    unordered_map<int, list<pair<int, int>>> adj;
    for (int i = 0; i < edge; i++)
    {
      int u = edges[i][0];
      int v = edges[i][1];
      int w = edges[i][2];
      adj[u].push_back(make_pair(v, w));
      adj[v].push_back(make_pair(u, w));
    }
    vector<int> dist(vertice, INT_MAX);
    set<pair<int, int>> st;
    dist[source] = 0;
    st.insert(make_pair(0, source));
    while (!st.empty())
    {
      // fetch top record
      auto top = *st.begin();
      int nodeDistance = top.first;
      ;
      int topNode = top.second;
      // remove top record
      st.erase(st.begin());
      // traverse neighbour
      for (auto neighbour : adj[topNode])
      {
        if ((nodeDistance + neighbour.second) < dist[neighbour.first])
        {
          auto record = st.find(make_pair(dist[neighbour.first], neighbour.first));
          if (record != st.end())
          {
            // if record found then eraase
            st.erase(record);
          }
          // distance update
          dist[neighbour.first] = nodeDistance + neighbour.second;
          // record  push in set
          st.insert(make_pair(dist[neighbour.first], neighbour.first));
        }
      }
    }
    return dist;
  }
};