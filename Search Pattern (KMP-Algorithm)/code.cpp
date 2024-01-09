class Solution
{
    public:
       vector <int> search(string pat, string txt)
        {
            //code here
            vector<int> v;
            int n = pat.size();
            for( int i=0;i<txt.size();i++){
                if(txt[i]==pat[0]){
                    if(txt.substr(i,n)==pat){
                        v.push_back(i+1);
                    }
                }
            }
            return v;
        }
     
};
