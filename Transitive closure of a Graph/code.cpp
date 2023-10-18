class Solution{
public:
void solve(int node1,int node2,unordered_map<int,list<int>>& adjList,vector<int>& visited,vector<vector<int>>& ansGraph)
{
    ansGraph[node1][node2]=1;
    visited[node2]=1;
    for(auto it:adjList[node2])
    {
        if(visited[it] == 0)
        {
            solve(node1,it,adjList,visited,ansGraph);
        }
    }
}
    vector<vector<int>> transitiveClosure(int N, vector<vector<int>> graph)
    {
        // code here
        //Making the adjacency List
        unordered_map<int,list<int>> adjList;
        for(int i=0;i<graph.size();i++)
        {
            for(int j=0;j<graph[0].size();j++)
            {
                if(graph[i][j])
                adjList[i].push_back(j);
            }
        }
        vector<vector<int>> ansGraph(N,vector<int>(N,0));
        //Start DFS
        for(int i=0;i<N;i++)
        {
            vector<int> visited(N,0);
            for(auto it:adjList[i])
            {
                if(visited[it] == 0)
                {
                    solve(i,it,adjList,visited,ansGraph);
                }
            }
        }
        
        for(int i=0;i<N;i++)
        {
            ansGraph[i][i]=1;
        }
        return ansGraph;
        
    }
};
