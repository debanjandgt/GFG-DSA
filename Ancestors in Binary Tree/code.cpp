class Solution {
  public:
    // Function should return all the ancestor of the target node
    vector<int> vec;
    int fl=0;
    void solve(struct Node *root, int target)
    {
        if(root == NULL)
        return;
        if(root->data != target)
        {
            vec.push_back(root->data);
            solve(root->left,target);
            if(fl == 1) return;
            solve(root->right,target);
            if(fl == 1) return;
            vec.pop_back();
        }
        else
        {
            fl=1;
            return;
        }
    }
    vector<int> Ancestors(struct Node *root, int target) {
        // Code here
        solve(root,target);
        if(vec.size() == 0)
        return {};
        reverse(vec.begin(),vec.end());
        return vec;
    }
};
