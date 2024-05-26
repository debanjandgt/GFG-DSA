class Solution {
  public:
    int longestSubseq(int n, vector<int> &a) {
       vector<int>dp(n+1,1);
       for(int i=1;i<n;i++){
           for(int j=0;j<i;j++){
               if(abs(a[i]-a[j])==1){
                   dp[i] = max(dp[i],1+dp[j]);
               }
           }
       }
       return *max_element(dp.begin(),dp.end());
    }
};
