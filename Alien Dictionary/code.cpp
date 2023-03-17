class Solution{
    public:
    string findOrder(string dict[], int N, int K) {
       unordered_map<int,list<int>> adj;
        for(int i=0;i<N-1;i++)
        {
            string s1=dict[i];
            string s2=dict[i+1];
            int len = min(s1.size(),s2.size());
            for(int j=0;j<len;j++)
            {
                if(s1[j]!=s2[j])
                {
                    adj[s1[j] - 'a'].push_back(s2[j] - 'a');
                    break;
                }
            }
        }
        
        vector<int>inDegree(K,0);
        for(int i=0;i<K;i++)
        {
            for(auto it:adj[i])
            {
                inDegree[it]++;
            }
        }
        
        //Check whose inDegree are 0;
        
        queue<int> q;
        for(int i=0;i<K;i++)
        {
            if(inDegree[i] == 0)
            q.push(i);
        }
        
        string ans;
        while(!q.empty())
        {
            int frontNode=q.front();
            q.pop();
            ans.push_back(char(frontNode + 'a'));
            for(auto it:adj[frontNode])
            {
                inDegree[it]--;
                if(inDegree[it] == 0)
                q.push(it);
            }
        }
        return ans;
    }
};
