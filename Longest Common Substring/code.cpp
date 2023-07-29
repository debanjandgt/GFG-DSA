class Solution{
    public:
    
    int longestCommonSubstr (string S1, string S2, int n, int m)
    {
        vector<vector<int>> dp(n+1,vector<int>(m+1,0));
        int maxi=INT_MIN;
        for(int ind1=1;ind1<=n;ind1++)
        {
            for(int ind2=1;ind2<=m;ind2++)
            {
                if(S1[ind1-1] == S2[ind2-1])
                {
                    dp[ind1][ind2] = 1+dp[ind1-1][ind2-1];
                    maxi=max(maxi,dp[ind1][ind2]);
                }
                else
                dp[ind1][ind2] = 0;
            }
        }
        return maxi == INT_MIN?0:maxi;
    }
};
