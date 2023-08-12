class Solution{
public:
    int solve(vector<vector<int>>& dp,int arr[],int i,int j)
    {
        if(i == j)
        return 0;
        
        if(dp[i][j] != -1)
        return dp[i][j];
        
        int mini=1e9;
        for(int k=i;k<j;k++)
        {
            int steps=arr[i-1]*arr[k]*arr[j] + solve(dp,arr,i,k) + solve(dp,arr,k+1,j);
            mini=min(mini,steps);
        } 
        return dp[i][j]=mini;
    }
    int matrixMultiplication(int N, int arr[])
    {
        // code here
        vector<vector<int>> dp(N,vector<int>(N,-1));
        return solve(dp,arr,1,N-1);
    }
};
