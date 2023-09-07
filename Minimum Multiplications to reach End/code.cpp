class Solution {
  public:
  int mod=100000;
    int minimumMultiplications(vector<int>& arr, int start, int end) {
        if(start == end)
        return 0;
        // code here
        queue<pair<int,int>> pq;
          pq.push({start,0});
          vector<int> dist(100000,1e9);
        dist[start]=0;
        while(!pq.empty())
        {
            auto it=pq.front();
            pq.pop();
            int value=it.first%mod;
            int steps=it.second;
            for(int i=0;i<arr.size();i++)
            {
                int temp_val=(value%mod*arr[i]%mod)%mod;
                if(steps+1 < dist[temp_val]){
                dist[temp_val] = steps+1 ;
                if(temp_val == end)
                return dist[temp_val];
                
                pq.push({temp_val,steps+1});
                }
            }
        }
        
        return -1;
    }
};
