class Solution{
  public:
    int longestKSubstr(string s, int k) {
    // your code here
    map<char,int> m;
    int i=0;
    int j=0;
    int maxi=-1;
    int n=s.size();
    while(j<n)
    {
        char ch=s[j];
        m[ch]++;
        if(m.size() == k)
        {
            maxi=max(maxi,(j-i+1));
        }
        else if(m.size() > k)
        {
            while(m.size() > k)
            {
                char c=s[i];
                m[c]--;
                if(m[c] == 0)
                m.erase(c);
                i++;
            }
        }
        j++;
    }
    return maxi;
    
    }
};
