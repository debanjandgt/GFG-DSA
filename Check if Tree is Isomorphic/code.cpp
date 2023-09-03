class Solution{
  public:
    // Return True if the given trees are isomotphic. Else return False.
    bool traverse(Node* root1, Node* root2){
        if(root1 == NULL && root2 == NULL){
            return true;
        }
        if(root1 == NULL && root2 != NULL){
            return false;
        }
        if(root1 != NULL && root2 == NULL){
            return false;
        }
        
        if(root1->data != root2->data){
            return false;
        }
        else{
            return (traverse(root1->left,root2->left) && traverse(root1->right,root2->right)
            || traverse(root1->left,root2->right) && traverse(root1->right,root2->left));
        }
    }
    bool isIsomorphic(Node *root1,Node *root2)
    {
    //add code here.
      bool ans = traverse(root1, root2);
        return ans;
    }
};
