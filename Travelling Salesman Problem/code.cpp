class Solution {
public:
int tsp(int mask,int pos,int visited,vector<vector<int>>& cost,vector<vector<int>>& dp)
{
    if(mask == visited)
    return cost[pos][0];
    if(dp[mask][pos] != -1)
    return dp[mask][pos];
    int mini=1e9;
    for(int city = 0 ;city < cost.size() ;city++)
    {
        if(((1 << city) & mask) == 0){
        int newAns=cost[pos][city] + tsp(mask|(1<<city),city,visited,cost,dp);
        mini=min(mini,newAns);
        }
    }
    return dp[mask][pos]=mini;
}
int total_cost(vector<vector<int>>cost){
    // Code here
    int n=cost.size();
    int visited=(1<<n)-1;
    vector<vector<int>> dp(pow(2,n),vector<int>(n,-1)); 
    return tsp(1,0,visited,cost,dp);
    
}
};
