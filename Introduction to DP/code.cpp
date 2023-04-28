class Solution {
public:
    long long int mod = 1e9+7;
    
    long long int topDown(int n) {
        vector<long long int> dp(n+1,-1);
        return topsi(n,dp);
    }
    
    long long int topsi(int n , vector<long long int>& dp)
    {
        if(n==0 || n==1)
            return n;
        if(dp[n]!= -1)
            return dp[n];
        dp[n]=(topsi(n-1,dp)%mod+topsi(n-2,dp)%mod)%mod;
        return dp[n]%mod;
    }
    
    long long int bottomUp(int n) {
        if(n==0 || n==1)
            return n;
        long long int a=0,b=1,c;
        for(int i=2;i<=n;i++)
        {
             c=(a%mod+b%mod)%mod;
            a=b%mod;
            b=c%mod;
        }
        return c%mod;
    }
};
