#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

using lli = long long;
class Solution
{
	public:
	

    lli binpow(lli a, lli b, lli mod) {
    if (b == 0)
        return 1;
    if (b % 2) {
        return a * binpow(a, b - 1, mod) % mod;
    } else {
        lli temp = binpow(a, b / 2, mod);
        return temp * temp % mod;
    }
}
		long long int PowMod(long long int x,long long int n,long long int M)
		{
		    // Code here
		    return binpow(x,n,M);
		}
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	long long int x, n, m;
    	cin >> x >> n >> m;
    	Solution ob;
    	long long int ans = ob.PowMod(x, n, m);
    	cout << ans <<"\n";
    }
	return 0;
}
