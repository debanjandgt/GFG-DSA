//User function template in C++

class Solution
{
    public:
    //Function to find total number of unique paths.
    int solve(int m,int n,vector<vector<int>>& dp){
        
        if(m == 0 && n == 0)
        return 1;
        if(m<0 || n<0)
        return 0;
        if(dp[m][n] != -1)
        return dp[m][n];
        int up=solve(m-1,n,dp);
        int left=solve(m,n-1,dp);
        return dp[m][n] = up+left;
    }
    int NumberOfPath(int a, int b)
    {
        vector<vector<int>> dp(a,vector<int>(b,-1));
        int ans=solve(a-1,b-1,dp);
        return ans;
    }
};
