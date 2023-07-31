class Solution{
public:
	int minOperations(string str1, string str2) 
	{ 
	    string word1=str1,word2=str2;
	    if(word1 == word2)
        return 0;
        int n=word1.size();
        int m=word2.size();

        vector<vector<int>> dp(n+1,vector<int>(m+1,0));

        for(int ind1=1;ind1<=n;ind1++)
        {
            for(int ind2=1;ind2<=m;ind2++)
            {
                if(word1[ind1-1] == word2[ind2-1])
                dp[ind1][ind2] = 1 + dp[ind1-1][ind2-1];

                else
                dp[ind1][ind2]= 0 + max(dp[ind1-1][ind2],dp[ind1][ind2-1]);
            }
        }
        return (n-dp[n][m])+(m-dp[n][m]);
	    
	} 
};
