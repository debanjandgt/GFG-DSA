class Solution
{
    public:
    //Function to check whether a Binary Tree is BST or not.
    void solve(Node* root,vector<int>& v){
        if(root ==  NULL)
        return;
        solve(root->left,v);
        v.push_back(root->data);
        solve(root->right,v);
    }
    bool isBST(Node* root) 
    {
        vector<int> v;
       solve(root,v);
       for(int i=0;i<v.size()-1;i++){
           if(v[i]>=v[i+1])
           return false;
       }
       return true; 
    }
};
