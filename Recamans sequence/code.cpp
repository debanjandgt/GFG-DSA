class Solution{
public:
    vector<int> recamanSequence(int n){
        // code here
        vector<int> v;
        map<int,int> m;
        m[0]++;
        v.push_back(0);
        for(int i = 1; i<n; i++)
        {
            if(((v[i-1] - i) < 0) || m.find(v[i-1]-i) != m.end())
            {
                m[v[i-1]+i]++;
                v.push_back(v[i-1]+i);
            }
            else 
            {
                v.push_back(v[i-1]-i);
                m[v[i-1]-i]++;
            }
        }
        return v;
    }
};
