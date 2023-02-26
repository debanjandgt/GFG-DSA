class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    void solve(vector<int> adj[],vector<int>& ans,vector<int>& visited,int V,int& node)
    {
        if(ans.size() == V)
        return;
        else
        {
            if(!visited[node])
            {
                visited[node]=1;
                ans.push_back(node);
                for(auto i:adj[node])
                {
                    if(!visited[i])
                    {
                        solve(adj,ans,visited,V,i);
                    }
                }
            }
        }
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        vector<int> ans;
        vector <int> visited(V,0);
        int node=0;
        solve(adj,ans,visited,V,node);
        return ans;
    }
};
