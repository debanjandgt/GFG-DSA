void Traverse(Node* root, int x,bool& result){
    if(root == NULL)
    return;
    else{
        
        Traverse(root->left,x,result);
        if(root -> data == x)
        {
            result=true;
            return;
        }
        Traverse(root->right,x,result);
    }

}
bool search(Node* root, int x) {
    bool result=false;
        Traverse(root,x,result);
        
        return result;
}
