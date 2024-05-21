//User function Template for C++

class Solution
{
    public:
    void solve(vector<vector<int>>& vec,vector<int>& A,vector<int> temp,int i)
    {
        if( i>= A.size())
        {
            vec.push_back(temp);
            return;
        }
        temp.push_back(A[i]);
        solve(vec,A,temp,i+1);
        temp.pop_back();
        solve(vec,A,temp,i+1);
    }
    vector<vector<int> > subsets(vector<int>& A)
    {
        vector<vector<int>> vec;
        vector<int> temp;
        solve(vec,A,temp,0);
        sort(vec.begin(),vec.end());
        return vec;
    }
};
