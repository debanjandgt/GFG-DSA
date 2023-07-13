class Solution{

  public:
	int minDifference(int arr[], int n)  { 
	    vector<int> nums;
	    for(int i=0;i<n;i++)
	    nums.push_back(arr[i]);
	    n=nums.size();
        int totalSum=0;
        for(int i=0;i<n;i++)
        {
            totalSum+=nums[i];
        }
        vector<vector<bool>>dp(n,vector<bool>(totalSum+1,false));
        //Age target 0 teh sob true korbo

        for(int i=0;i<n;i++)
        {
            dp[i][0]=true;
        }

        //jodi amar element jeta first index e ache seta jodi target er theke kom hoe then ami true matk korbo 

        if(nums[0] <= totalSum)
        dp[0][nums[0]]=true;

        for(int i=1;i<n;i++)
        {
            for(int target=1;target<=totalSum;target++)
            {
                bool notTake=dp[i-1][target];
                bool take=false;
                if(nums[i] <= target)
                take=dp[i-1][target-nums[i]];

                dp[i][target]=take | notTake;
            }
        }

        vector<int> s1;
        for(int i=0;i<=totalSum;i++)
        {
            if(dp[n-1][i] == true)
            s1.push_back(i);
        }
     
        int mini=INT_MAX;
        for(int i=0;i<s1.size();i++)
        {
             int value=s1[i];
            value=abs(value-(totalSum-value));
            mini=min(mini,value);
        }
        return mini;
	} 
};
