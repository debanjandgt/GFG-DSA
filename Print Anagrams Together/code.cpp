class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& strs) {
        //code here
         vector<int> checks(strs.size(),0);
        vector<vector<string>> ans;
        for(int i=0;i<strs.size();i++)
        {
            vector<string> temp;
            if(checks[i] == 0)
            {
                temp.push_back(strs[i]);
                for(int j=0;j<strs.size();j++)
                {
                    if(i == j)
                    continue;
                    else
                    {
                        string a=strs[i];
                        string b=strs[j];
                        sort(a.begin(),a.end());
                        sort(b.begin(),b.end());
                        if(a == b && checks[j] == 0)
                        {
                            temp.push_back(strs[j]);
                            checks[j]=1;
                        }
                    }
                }
            }
            if(temp.size() >= 1)
            ans.push_back(temp);
        }
        return ans;
    }
};
