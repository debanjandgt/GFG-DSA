class Solution {
  public:
  int solve(vector<vector<int>>& triangle,vector<vector<int>>& dp,int n,int i,int j)
    {
        if(i == n)
        {
            return triangle[i][j];
        }
        if(dp[i][j] != -1)
        return dp[i][j];

        int down=triangle[i][j]+solve(triangle,dp,n,i+1,j);
        int diag=triangle[i][j]+solve(triangle,dp,n,i+1,j+1);

        return dp[i][j]=min(down,diag);
    }
    int minimizeSum(int n, vector<vector<int>>& triangle) {
         vector<vector<int>> dp(n,vector<int>(n,-1));

        return solve(triangle,dp,n-1,0,0);
    }
};
