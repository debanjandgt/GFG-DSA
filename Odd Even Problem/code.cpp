class Solution {
  public:
    string oddEven(string s) {
        // code here
        map<char,int> mp;
        for(int i=0;i<s.size();i++)
        {
            char ch=s[i];
            mp[ch]++;
        }
        set<char> s1;
        set<char> s2;
        for(int i=0;i<s.size();i++)
        {
            char ch=s[i];
            if(ch%2 == 0 && mp[ch]%2 == 0)
            s1.insert(ch);
            else if(ch%2 == 1 && mp[ch]%2 == 1)
            s2.insert(ch);
        }
        if((s1.size()+s2.size())%2 == 1)
        return "ODD";
        return "EVEN";
    }
};
