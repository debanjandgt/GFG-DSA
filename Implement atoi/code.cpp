class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string s) {
        //Your code here
        vector<int> vec;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(i == 0 && s[i] == '-')
            continue;
            else
            {
                int d=(int)s[i];
                if(d>=48 && d<=57)
                {
                     vec.insert(vec.begin(),s[i]-'0');
                }
                else
                return -1;
            }
        }
        int po=vec.size() - 1;
        long long ans=0;
        for(int i=0;i<vec.size();i++)
        {
            int val=vec[i];
            ans+=(pow(10,po)*val);
            po--;
        }
        if(s[0] == '-')
        ans*=-1;
        return ans;
    }
};
