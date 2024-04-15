class Solution {
  public:
    int doBinarySearch(vector<int>& b,int val)
    {
        int low=0,high=b.size()-1;
        int prob=-1;
        while(low <= high)
        {
            int mid=(low+high)/2;
            int v=b[mid];
            if(v>val)
            high=mid-1;
            else
            {
                prob=mid;
                low=mid+1;
            }
        }
        return prob;
    }
    vector<int> countElements(vector<int> &a, vector<int> &b, int n, vector<int> &query,
                              int q) {
        // Your code goes here;
        vector<int> ans;
        sort(b.begin(),b.end());
        for(int i=0;i<q;i++)
        {
            int ind=query[i];
            int val=a[ind];
            int po=doBinarySearch(b,val) + 1;
            ans.push_back(po);
        }
        return ans;
    }
};
