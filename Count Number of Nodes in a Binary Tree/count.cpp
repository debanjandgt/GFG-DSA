#include<bits/stdc++.h>
class Solution {
  public:
  void Traverse(Node* root,set<Node*>& s){
    if(root == NULL)
    return;
    else{
        s.insert(root);
        Traverse(root->left,s);
        Traverse(root -> right,s);
    }
}
    int countNodes(Node* root) {
       set<Node*> s;
        Traverse(root,s);
        return(s.size());
    }
};
