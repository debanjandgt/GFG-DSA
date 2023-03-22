class Solution
{
	public:
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        priority_queue<pair<int,int> ,
        vector<pair<int,int>>,greater<pair<int,int>>> pq;
        
        //Make Visited Array
        vector<int> vis(V,0);
        pq.push({0,0});
        int sum=0;
        while(!pq.empty())
        {
            auto p=pq.top();
            pq.pop();
            int wt=p.first;
            int node=p.second;
            if(vis[node] == 0)
            {
                vis[node]=1;
                sum+=wt;
                for(auto it:adj[node])
                {
                    int adjNode=it[0];
                    int edW=it[1];
                    if(!vis[adjNode])
                    {
                        pq.push({edW,adjNode});
                    }
                }
            }
        }
        return sum;
    }
};
