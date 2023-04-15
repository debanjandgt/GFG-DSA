class Solution
{
    public:
    //Function to find the maximum money the thief can get.
    int solve(int arr[],int n,vector<int>& dp)
    {
        if(n == 0)
        return arr[n];
        if(n<0)
        return 0;
        else
        {
            if(dp[n] != -1)
            return dp[n];
            else{
                int Pick=arr[n]+solve(arr,n-2,dp);
                int nonPick=0+solve(arr,n-1,dp);
                dp[n]=max(Pick,nonPick);
                return dp[n];
            }
            
        }
    }
    int FindMaxSum(int arr[], int n)
    {
        vector<int> dp(n+1,-1);
        int ans=solve(arr,n-1,dp);
        return ans;
    }
};
