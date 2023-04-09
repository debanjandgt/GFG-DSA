class Solution {
  public:
  long long int solve(vector<int>& dp,long long int n)
  {
      if(n<=1)
      return n;
      else
      {
          if(dp[n] != -1)
           return dp[n];
              else
              {
                  dp[n]=(solve(dp,n-1)+solve(dp,n-2))%1000000007;
                  return dp[n];
              }
      }
  }
    long long int nthFibonacci(long long int n){
        vector<int> dp(n+1,-1);
        long long int ans = solve(dp,n);
        return ans%1000000007;
    }
};
