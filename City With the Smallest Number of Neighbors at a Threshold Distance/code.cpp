class Solution {
  public:
    int findCity(int n, int m, vector<vector<int>>& edges,
                 int distanceThreshold) {
                            vector<vector<int>> cost(n,vector<int>(n,1e9));
        //Setting the Cost of Distance like 1->1 as 0
        for(int i=0;i<n;i++)
        {
            cost[i][i]=0;
        }
        //setting up the Adjacency Matrix
        for(auto it:edges)
        {
            int u=it[0];
            int v=it[1];
            int w=it[2];

            cost[u][v]=w;
            cost[v][u]=w;
        }

        for(int k=0;k<n;k++)
        {
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    if (cost[i][k] == 1e9 || cost[k][j] == 1e9)
						continue;
                    cost[i][j]=min(cost[i][j],cost[i][k]+cost[k][j]);
                }
            }
        }

        int probable_city;
        int count=0,maxi_count= n;

        for(int i=0;i<n;i++)
        {
            count=0;
            for(int j=0;j<n;j++)
            {
                    if(cost[i][j] <= distanceThreshold)
                    count++;
            }
            if(count<=maxi_count)
            {
                maxi_count=count;
                probable_city=i;
            }
        }
        return probable_city;
                 }
};
