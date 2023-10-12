class Solution{
    public:
    int height(Node *root){
        if(root == NULL)
        return 0;
        else{
            int left=height(root -> left);
            int right=height(root->right);
            int height=max(left,right)+1;
            return height;
        }
    }
    //Function to check whether a binary tree is balanced or not.
    bool isBalanced(Node *root)
    {
        if (root == NULL)
	    return true;
	    
	    bool l=isBalanced(root -> left);
	    bool r=isBalanced(root -> right);
	    bool ans;
	    ans=abs((height(root->left))-height(root->right))<=1;
	    if( l && r && ans)
	    return true;
	    else
	    return false;
    }
};
