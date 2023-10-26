class Solution
{
  public:
    int minOperation(int n)
    {
        //code here.
        vector<int> dp(n+1,0);
        for(int i=n-1;i>=0;i--)
        {
            if(i == 0)
            {
                dp[0]=1+dp[i+1];
                continue;
            }
            int a=1+dp[i+1];
            int b=1e9;
            if(i*2<=n)
            b=1+dp[i*2];
            
            dp[i]=min(a,b);
        }
        
        return dp[0];
    }
};
