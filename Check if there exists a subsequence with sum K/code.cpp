class Solution{
    public:
    bool solve(int n,int sum,int index,vector<int>& arr,int k)
    {
        if(sum > k)
        return false;
        if(sum == k)
        return true;
        if(index >= n)
        {
            if( sum != k)
            return false;
        }
        else{
            sum+=arr[index];
            bool ans1=solve(n,sum,index+1,arr,k);
            if(ans1)
            return ans1;
            sum-=arr[index];
            bool ans2=solve(n,sum,index+1,arr,k);
            return ans2;
        }
    }
    bool checkSubsequenceSum(int n, vector<int>& arr, int k) {
        int index=0,sum=0;
        bool answer=solve(n,sum,index,arr,k);
        return answer;
    }
};
