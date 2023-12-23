class Solution
{
    public:
    //Function to find all elements in array that appear more than n/k times.
    int countOccurence(int arr[], int n, int k) {
    map<int, int> mp;
    
    for(int i = 0; i < n; i++)
        mp[arr[i]]++;
    
    int cnt = 0;
    for (auto it = mp.begin(); it != mp.end(); it++) 
        if (it->second > n/k) cnt++;
    return cnt;
}
};
