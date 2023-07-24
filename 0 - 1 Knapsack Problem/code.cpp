class Solution
{
    public:
    
    int solve(vector<int>& weights,vector<int>& values,vector<vector<int>>& dp,int n,int W)
    {
        if(n == 0)
        {
            if(weights[n] <= W)
            return values[0];
            else
            return 0;
        }
        if(dp[n][W] != -1)
        return dp[n][W];
        
        int notTake= 0 + solve(weights,values,dp,n-1,W);
        
        int take=INT_MIN;
        
        if(weights[n] <= W)
        
        take=values[n]+solve(weights,values,dp,n-1,W-weights[n]);
        
        return dp[n][W] = max(take,notTake);
    }
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       vector<int> weights,values;
       for(int i=0;i<n;i++)
       {
           weights.push_back(wt[i]);
           values.push_back(val[i]);
       }
       
       vector<vector<int>> dp(n,vector<int>(W+1,-1));
       return solve(weights,values,dp,n-1,W);
    }
};
