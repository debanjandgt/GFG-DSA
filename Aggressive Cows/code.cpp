class Solution {
public:

    int solve(int n, int k, vector<int> &stalls) {
    
        sort(stalls.begin(),stalls.end());
        int maxi=0;
        for(int i=0;i<n;i++)
        {
            maxi=max(maxi,stalls[i]);
        }
        int low=1,high=stalls[n-1]-stalls[0];
        int mid,ans;
        while(low <= high)
        {
            mid=(low+high)/2;
            int co_ord=stalls[0];
            int cnt=1,t=0;
            for(int i=1;i<n;i++)
            {
                if(stalls[i]-co_ord >= mid)
                {
                    cnt++;
                    co_ord=stalls[i];
                }
                if(cnt == k)
                {
                    ans=mid;
                    low=mid+1;
                    t=1;
                }
            }
            if(t == 0)
            high=mid-1;
        }
        return ans;
    }
};
