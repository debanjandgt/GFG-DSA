class Solution
{
    public:
    int mod=1e9+7;
    int padovanSequence(int n)
    {
       //code here
       vector<int> vec(n+10,0);
       vec[0]=1;
       vec[1]=1;
       vec[2]=1;
       for(int i=3;i<=n;i++)
       {
           vec[i]=(vec[i-2]%mod+vec[i-3]%mod)%mod;
       }
        return vec[n]%mod;
    }
    
};
