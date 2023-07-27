class Solution{
public:
    int solve(vector<int>& values,vector<int>& weights,vector<vector<int>>& dp,int n,int w)
    {
        if(n == 0)
        {
           return ((w/weights[0])*values[0]);
        }
        
        if(dp[n][w]  != -1)
        return dp[n][w];
        
        
        int notTake = 0 + solve(values,weights,dp,n-1,w);
        int take = INT_MIN;
        if(weights[n] <= w)
        take = values[n] + solve(values,weights,dp,n,w-weights[n]);
        
        return dp[n][w] = max(notTake,take);
    }
    int knapSack(int N, int W, int val[], int wt[])
    {
        vector<int> values(val,val+N);
        vector<int> weights(wt,wt+N);
        
        vector<vector<int>> dp(N,vector<int>(W+1,-1));
        
        return solve(values,weights,dp,N-1,W);
        
    }
};
