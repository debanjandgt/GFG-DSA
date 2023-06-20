class Solution
{
    public:
   void solve(set<vector<int>>& st,vector<int> ans,vector<vector<int>>& finale,
   vector<int>& arr,
    int ind)
    {
        if(ind >= arr.size())
        {
            sort(ans.begin(),ans.end());
            if(st.find(ans) == st.end()){
            finale.push_back(ans);
            
            st.insert(ans);
            }
            return;
        }
        ans.push_back(arr[ind]);
        solve(st,ans,finale,arr,ind+1);
        ans.pop_back();
        solve(st,ans,finale,arr,ind+1);
    }
    vector<vector<int> > AllSubsets(vector<int> arr, int n)
    {
       vector<int> ans;
        set<vector<int>> st;
        vector<vector<int>> finale;
        int ind=0;
        solve(st,ans,finale,arr,ind);
        sort(finale.begin(),finale.end());
        return finale;
    }
};
