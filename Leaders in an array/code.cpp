class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        
        int maxi=INT_MIN;
        deque<int> dq;
        for(int i=n-1;i>=0;i--)
        {
            if(a[i]>= maxi)
            {
                dq.push_front(a[i]);
                maxi=a[i];
            }
        }
        vector<int> ans(dq.begin(),dq.end());
        return ans;
        
    }
};
