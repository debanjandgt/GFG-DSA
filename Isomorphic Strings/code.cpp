class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string str1, string str2)
    {
        unordered_map<char,char> mp,parent;
        if(str1.size() != str2.size())
        return false;
        
        for(int i=0;i<str1.size();i++)
        {
            char c1=str1[i];
            char c2=str2[i];
            if(mp.find(c1) == mp.end() && parent.find(c2) == parent.end())
            {
                mp[c1]=c2;
                parent[c2]=c1;
            }
            else if(parent[c2] != c1)
            return false;
        }
        return true;
    }
};
