class Solution{
	
	public:
	int solve(vector<int>& nums, vector<vector<int>>& dp, int index, int prev_index) {
        if (index == nums.size()) {
           
            return 0;
        }
        
        if (dp[index][prev_index+1] != -1)
            return dp[index][prev_index+1];

        int notTake = solve(nums, dp, index+1 , prev_index);
        int take = 0;
        
        if (prev_index == -1 || nums[index] > nums[prev_index]) {
            take = nums[index] + solve(nums, dp, index+1,index);
        }
        
        return dp[index][prev_index+1] = max(notTake, take);
    }

	int maxSumIS(int arr[], int n)  
	{  
	    // Your code goes here
	    vector<int> nums(arr,arr+n);
        vector<vector<int>> dp(n,vector<int>(n+1,-1));
        int index=0,prev_index=-1;
        return solve(nums, dp, index,prev_index);
	}  
};
