class Solution {
  public:
    int minimizeDifference(int n, int k, vector<int> &arr) {
        // code here
        vector<int> minFromBegin(n,0);
        vector<int> minFromEnd(n,0);
        vector<int> maxFromBegin(n,0);
        vector<int> maxFromEnd(n,0);
        minFromBegin[0]=arr[0];
        minFromEnd[n-1]=arr[n-1];
        maxFromBegin[0]=arr[0];
        maxFromEnd[n-1]=arr[n-1];
        for(int i=1;i<n;i++)
        {
            int val=arr[i];
            minFromBegin[i]=min(val,minFromBegin[i-1]);
            maxFromBegin[i]=max(val,maxFromBegin[i-1]);
        }
        for(int i=n-2;i>=0;i--)
        {
            int val=arr[i];
            minFromEnd[i]=min(val,minFromEnd[i+1]);
            maxFromEnd[i]=max(val,maxFromEnd[i+1]);
        }
        int ans=min(maxFromEnd[k]-minFromEnd[k],maxFromBegin[n-(k+1)]-minFromBegin[n-(k+1)]);
       //
        int t=0;
        for(int i=k;i<n-1;i++)
        {
            int v1=max(maxFromBegin[t],maxFromEnd[i+1]);
            int v2=min(minFromBegin[t],minFromEnd[i+1]);
            t++;
            ans=min(ans,v1-v2);
        }
        return ans;
    }
};
