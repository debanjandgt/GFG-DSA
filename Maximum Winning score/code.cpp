class Solution {
  public:
    //Function to return maximum path product from any node in a tree.
    long long findMaxScore(Node* root)
    {
        long long ans=1;
        if(root == NULL)
        return 1;
        long long lh=findMaxScore(root->left);
        long long rh=findMaxScore(root->right);
        return root->data*max(lh,rh);
    }
};
