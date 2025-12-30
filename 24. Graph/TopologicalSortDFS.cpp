// class Solution {
  public:
  void ts(int node,unordered_map<int,bool>&visited,stack<int>&s,unordered_map<int,list<int>>&adj){
      visited[node]=1;
      for(auto neighbour:adj[node]){
          if(!visited[neighbour]){
              ts(neighbour,visited,s,adj);
          }
      }
      s.push(node);
  };
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        // code here
        int E = edges.size();
          unordered_map<int,list<int>>adj;
          for(int i = 0;i<E;i++){
              int u = edges[i][0];
              int v = edges[i][1];
              adj[u].push_back(v);
          }
          unordered_map<int,bool>visited;
          stack<int>s;
          
          for(int i = 0;i<V;i++){
              if(!visited[i]){
                  ts(i,visited,s,adj);
              }
          }
          vector<int>ans;
          while(!s.empty()){
              ans.push_back(s.top());
              s.pop();
          }
          return ans;
    }
};