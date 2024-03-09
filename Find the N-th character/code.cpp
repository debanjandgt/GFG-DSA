//User function template for C++

class Solution{
  public:
    char nthCharacter(string s, int r, int n) {
        //code here
        string temp;
        while(r-- > 0)
        {
            for(int i=0;i<s.size();i++)
            {
                if(s[i] == '0')
                temp+="01";
                else 
                temp+="10";
                
                if(temp.size() > n)
                {
                    s.clear();
                    s.resize(temp.size());
                    s=temp;
                    temp="";
                    break;
                }
            }
        }
        return s[n];
    }
};
