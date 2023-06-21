// Return list of all combinations of balanced parantheses
class Solution
{
    public:
        void solve(vector<string>& vec,string s,int open,int closed,int n)
    {
        if(open == n && closed == n){
        vec.push_back(s);
        return;
        }
        else
        {
            if(open<n){
            s=s+'(';
            solve(vec,s,open+1,closed,n);
            s.pop_back();
            
            }
            if(closed < open)
            {
                s=s+')';
                solve(vec,s,open,closed+1,n);
                s.pop_back();
                
            }


        }
    }
    vector<string> AllParenthesis(int n) 
    {
     int open=0,closed=0;
        string s;
        vector<string> vec;
        solve(vec,s,open,closed,n);
        return vec;
    }
};
