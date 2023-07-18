class Solution {
  public:
  int mod=(int)1e9+7;
    int countPartitions(int n, int d, vector<int>& arr) {
        long long totalSum = 0;
        for(int i=0;i<n;i++)
        {
            totalSum=totalSum+arr[i];
        }
        
        if(totalSum - d < 0 || (totalSum-d)%2)
        return 0;
    
        int modified = totalSum-d;
        modified/=2;
        
        vector<vector<int>> dp(n,vector<int>(modified+1,0));
       dp[0][0]=1;
        if(arr[0] <= modified)
       {
           if(arr[0] == 0)
           dp[0][0] = 2;
           else
           dp[0][arr[0]]=1;
       }
    
        for(int ind=1;ind<n;ind++)
        {
            for(int target=0;target<=modified;target++)
            {
                int notTake=dp[ind-1][target];
                int take=0;
                
                if(arr[ind] <= target)
                {
                    take=dp[ind-1][target-arr[ind]];
                }
                dp[ind][target]=(notTake%mod + take%mod)%mod;
            }
        }
       
 
       
       return dp[n-1][modified] ;
        
        
    }
};
