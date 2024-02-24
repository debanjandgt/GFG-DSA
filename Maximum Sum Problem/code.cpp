class Solution
{
    public:
        int maxSum(int n)
        {
           if(n<=0){
               return 0;
           }
           int t1 = maxSum(n/2);
           int t2 = maxSum(n/3);
           int t3 = maxSum(n/4);
           return max(n,t1+t2+t3);
        }
};
