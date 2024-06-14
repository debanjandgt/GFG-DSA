class Solution {
  public:
    string armstrongNumber(int n) {
        // code here
        int no=n;
        int ans=0;
        while(n)
        {
            int a=n%10;
            ans+=(a*a*a);
            n/=10;
        }
        return ans == no ? "true" : "false";
    }
};
