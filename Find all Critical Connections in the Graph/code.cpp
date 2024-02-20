class Solution {
public:
    int timer=1;
    void solve(int node,int parent,vector<int> adj[],vector<int>&            
    visited,vector<int>& tin,vector<int>& low,vector<vector<int>>& ans)
            {
                visited[node]=1;
                tin[node]=low[node]=timer;
                timer++;
                for(auto it:adj[node])
                {
                    if(it == parent)
                    continue;
                    if(visited[it] == 0){
                        solve(it,node,adj,visited,tin,low,ans);
                        low[node]=min(low[node],low[it]);

                       // node ------ it

                        if(low[it] > tin[node])
                            if(node<it){
                    ans.push_back({node,it});
                    }else{
                       ans.push_back({it,node}); 
                    }
                    }
                    else
                    {
                        low[node]=min(low[node],low[it]);
                    }
                }
            }

	vector<vector<int>>criticalConnections(int V, vector<int> adj[]){
	    // Code here
	    int n=V;
	    vector<int> visited(n,0);
        unordered_map<int,list<int>> adjList;
        vector<int> tin(n);
        vector<int> low(n);
            
            int node=0,parent=-1;
            vector<vector<int>> ans;
            solve(node,parent,adj,visited,tin,low,ans);
            sort(ans.begin(),ans.end());
            return ans;
	}
};
