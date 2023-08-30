class Solution{
    public:
    int f(int i, int n, int k, vector<int>& arr, vector<int>&dp){
        if(i==n) return 0;
        if(dp[i]!=-1) return dp[i];
        int len=0; 
        int maxi=INT_MIN;
        int ans=INT_MIN;
        for(int j=i; j<min(n, i+k); j++){
            len++;
            maxi=max(maxi, arr[j]);
            int sum=len*maxi+f(j+1, n, k, arr, dp);
            ans=max(ans, sum);
        }
        return dp[i]=ans;
    }
    
    int solve(int n, int k, vector<int>& arr){
        // Code here
        vector<int>dp(n+1, -1);
        return f(0, n, k, arr, dp);
    }
};
