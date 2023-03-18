class Solution {
  public:
     vector<int> shortestPath(int N,int M, vector<vector<int>>& edges){
        unordered_map<int, vector<pair<int, int>>> adj;
        for(int i=0;i<M;i++)
        {
            int u=edges[i][0];
            int v=edges[i][1];
            int w=edges[i][2];
            adj[u].push_back(make_pair(v,w));
        }
        
        //DO THE TOPOSORT
        vector<int>visited(N,0);
        stack<int> s;
        for(int i=0;i<N;i++)
        {
            if(!visited[i])
            toposort(adj,visited,s,i);
        }
        //TOPOSORT done
        
        vector<int> distance(N,INT_MAX);
        int src=0;
        distance[src]=0;
        pair<int,int> parent;
        make_pair(src,0);
        while(!s.empty())
        {
            int frontNode=s.top();
            s.pop();
            for(auto it:adj[frontNode])
            {
                if(distance[frontNode] != INT_MAX && distance[frontNode]+it.second < distance[it.first])
                distance[it.first]=distance[frontNode]+it.second;
            }
        }
        for(int i=0;i<N;i++)
        {
            if(distance[i] == INT_MAX)
            distance[i] =-1;
        }
        return distance;
    }
    void toposort(unordered_map<int, vector<pair<int, int>>>& adj
    ,vector<int>& visited
    ,stack<int>& s,int node)
    {
        visited[node]=1;
        for(auto it:adj[node])
        {
            if(!visited[it.first])
            toposort(adj,visited,s,it.first);
        }
        s.push(node);
    }
};
