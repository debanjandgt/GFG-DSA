class Solution{
  public:
    // root : the root Node of the given BST
    // target : the target sum
    void solve(struct Node * root,vector<int>& v)
    {
        if(root == NULL)
        return;
        else
        {
            solve(root->left,v);
            v.push_back(root->data);
            solve(root->right,v);
        }
    }
    int isPairPresent(struct Node *root, int target)
    {
    vector<int> v;
        solve(root,v);
        int i=0,j=v.size()-1;
        while(i<j)
        {
            if(v[i]+v[j]==target)
            return 1;
            else if(v[i]+v[j]<target)
            i++;
            else if(v[i]+v[j]>target)
            j--;
        }
        return 0;
    }
    
};
