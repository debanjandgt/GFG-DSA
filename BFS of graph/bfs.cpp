class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
       int visited[V]={0};
       visited[0]=1;
       queue<int> q;
       q.push(0);
       vector<int> ans;
       while(!q.empty())
       {
           int Node=q.front();
           q.pop();
           ans.push_back(Node);
           for(auto i:adj[Node])
           {
               if(!visited[i])
               {
                   q.push(i);
                   visited[i]=1;
               }
           }
       }
       return ans;
    }
};
