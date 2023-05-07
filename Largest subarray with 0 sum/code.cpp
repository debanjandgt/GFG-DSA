class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        int pSum=0;
        map<int,int> m;
        int w=0;
        for(int i=0;i<A.size();i++)
        {
            pSum+=A[i];
            if(pSum == 0)
            {
                w=i+1; // update the max length if prefix sum is 0
            }
            if(m.find(pSum) == m.end())
            {
                m[pSum]=i;
            }
            else
            {
                int p1=m[pSum]+1;
                int p2=i;
                int p=(p2-p1)+1;
                w=max(w,p);
            }
        }
        return w;
    }
};
