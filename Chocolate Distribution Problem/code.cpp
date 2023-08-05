class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    sort(a.begin(),a.end());
    vector<vector<long long>> vec;
    long long l=0,r=0;
    long long mini=INT_MAX;
    while(r<n)
    {
        if(r-l+1 == m)
        {
            long long value = a[r]-a[l];
            mini=min(mini,value);
            l++;
        }
        r++;
    }
    return mini;
    
    }   
};
