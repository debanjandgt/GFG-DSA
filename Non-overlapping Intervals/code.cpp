class Solution {
  public:
    int minRemoval(int N, vector<vector<int>> &intervals) {
         sort(intervals.begin(),intervals.end());

        int n=intervals.size();
        int cnt=0;
        int previous=intervals[0][1];
        for(int i=1;i<n;i++)
        {
            if(previous > intervals[i][0])
            {
                cnt++;
                previous=min(previous,intervals[i][1]);
            }
            else
            previous=intervals[i][1];
        }
        return cnt;
    }
};
