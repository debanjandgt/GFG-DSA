class Solution {
  public:
    long long maxDiamonds(int A[], int N, int K) {
        priority_queue<int> pq;
        for(int i=0;i<N;i++)
        {
            pq.push(A[i]);
        }
        long long int sum=0;
        while(K--)
        {
            int v=pq.top();
            pq.pop();
            sum+=v;
            pq.push(v/2);
        }
        return sum;
    }
};
