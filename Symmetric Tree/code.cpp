class Solution{
    public:
      bool check(Node *l,Node *r){
        if(l==NULL && r==NULL) return true;
        if((l!=NULL && r==NULL) || (r!=NULL && l==NULL)) return false;
     return (l->data==r->data) && (check(l->left,r->right) && check(l->right,r->left));
     
    }
    bool isSymmetric(struct Node* root)
    {
        // Code here
        if(root==NULL) return true;
        return (check(root->left,root->right));
    }
};
