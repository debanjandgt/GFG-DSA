class Solution {
  public:
    int mod=1e9+7;
    int solve(int i1,int i2,string& s1,string& s2,vector<vector<int>>& dp)
    {
        if(i2 == s2.size())
        return 1;
        if(i1 == s1.size())
        return 0;
        
        
        if(dp[i1][i2] != -1)
        return dp[i1][i2];
        
        int np=solve(i1+1,i2,s1,s2,dp);
        int pick=0;
        if(s1[i1] == s2[i2])
        {
            pick=solve(i1+1,i2+1,s1,s2,dp);
        }
        return dp[i1][i2]=(np+pick)%mod;
}
    int countWays(string s1, string s2) {
        // code here
        vector<vector<int>> dp(s1.size()+1,vector<int>(s2.size()+1,-1));
        return solve(0,0,s1,s2,dp)%mod;
    }
};
