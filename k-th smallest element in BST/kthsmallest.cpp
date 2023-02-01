class Solution {
  public:
    void Traverse(Node* root,vector<int>& v,int k){
    if(root == NULL)
    return;
    Traverse(root -> left ,v,k);
    v.push_back(root -> data);
    Traverse(root -> right , v,k);
}
    int KthSmallestElement(Node *root, int K) {
       vector<int> v;
        Traverse(root,v,K);
        if(v.size()<=K-1)
        return -1;
        return(v[K-1]);

    }
};
