class Solution {
  public:
    int romanToDecimal(string &s) {
        map<char,int> mp;
        mp['M']=1000;
        
        mp['D']=500;
       
        mp['C']=100;
        
        mp['L']=50;
       
        mp['X']=10;
        
        mp['V']=5;
        
        mp['I']=1;


        int value=0;
        for(int i=0;i<s.size()-1;i++)
        {
            int c1=mp[s[i]];
            int c2=mp[s[i+1]];
            if(c1 >= c2)
            value+=c1;
            else
            value-=c1;
        }
        value+=mp[s[s.size()-1]];
        return value;
    }
};
