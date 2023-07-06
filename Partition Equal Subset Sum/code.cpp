class Solution{
public:
  bool solve(vector<int>& nums,int n,long long target,vector<vector<int>>& dp)
    {
        if(target == 0)
        return false;
        if(n==0)
        return nums[n] == target;
        if(dp[n][target] != -1)
        return dp[n][target];

        bool nonTake=solve(nums,n-1,target,dp);
        bool take=false;
        if(nums[n]<=target )
        take =solve(nums,n-1,target-nums[n],dp);
        return dp[n][target]=take | nonTake;
    }
    int equalPartition(int N, int arr[])
    {
        vector<int> nums;
        nums.assign(arr,arr+N);
       long long sum=0;
        for(auto it:nums)
        sum+=it;
        if(sum%2 == 1)
        return false;

        long long target = (sum/2);
        vector<vector<int>> dp(nums.size(),vector<int>(target+1,-1));
        return solve(nums,nums.size()-1,target,dp);

    
    }
};
