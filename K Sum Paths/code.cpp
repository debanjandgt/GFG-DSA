class Solution {
public:
    vector<int> vec;

    void solve(Node* root, int k, int &count, unordered_map<int, int> &mp, int currSum) {
        if (root == NULL)
            return;

        currSum += root->data;

        if (mp.find(currSum - k) != mp.end()) {
            count += mp[currSum - k];
        }

        mp[currSum]++;

        solve(root->left, k, count, mp, currSum);
        solve(root->right, k, count, mp, currSum);

        mp[currSum]--;
    }

    int sumK(Node* root, int k) {
        int count = 0;
        unordered_map<int, int> mp;
        mp[0] = 1;
        int currSum = 0;

        solve(root, k, count, mp, currSum);

        return count;
    }
};
