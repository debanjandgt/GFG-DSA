class Solution {
  public:
    int swapNibbles(int n) {
        // code here
        string s="";
        while(n>0)
        {
            int a=n%2;
            if(a == 1)
            s='1'+s;
            else
            s='0'+s;
            n/=2;
        }
        while(s.size() != 8)
        {
            s='0'+s;
        }
        int mid=s.size();
        mid/=2;
        int ini=0;
        while(mid != 8)
        {
            swap(s[ini++],s[mid++]);
        }
        int t=0;
        int fAns=0;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i] == '1')
            fAns+=pow(2,t);
            
            t++;
        }
        return fAns;
    }
};
