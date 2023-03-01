class Solution
{
	public:
	//Function to return list containing vertices in Topological order.
	
	void Topo(int node,stack<int>& s,unordered_map<int,bool>& visited,vector<int> adj[])
	{
	    visited[node]=true;
	    for(int neighbour:adj[node])
	    {
	        if(!visited[neighbour])
	        {
	            Topo(neighbour,s,visited,adj);
	        }
	    }
	    s.push(node);
	}
	
	
	
	
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    stack<int> s;
	    unordered_map<int,bool> visited;
	    for(int i=0;i<V;i++)
	    {
	        if(!visited[i])
	        Topo(i,s,visited,adj);
	    }
	    vector<int> ans;
	    while(!s.empty())
	    {
	        int val=s.top();
	        ans.push_back(val);
	        s.pop();
	    }
	    return ans;
	}
};
