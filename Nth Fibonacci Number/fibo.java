class Solution {
    static long nthFibonacci(long n){
        // code here
        long a = 0;
        long b = 1;
        long sum = 0;
        for(int i = 2;i<=n;i++){
            sum = (a+b)%1000000007;
            a=b;
            b=sum;
        }
        return b;
    }
}
