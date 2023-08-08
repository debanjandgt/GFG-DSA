int findposition(int in[],int inorderstart,int inorderend,int element,int n)
    {
        for(int i=inorderstart;i<=inorderend;i++)
        {
            if(in[i]==element)
            {
                return i;
            }
        }
        return -1;
    }
    Node* solve(int in[],int post[],int &index,int inorderstart,int inorderend,int n)
    {
        if((index<0)||(inorderstart>inorderend))
        {
            return NULL;
        }
        
        int element=post[index--];
        Node* root =new Node(element);
        int position=findposition(in,inorderstart,inorderend,element,n);
        
        
        root->right=solve(in,post,index,position+1,inorderend,n);
        root->left=solve(in,post,index,inorderstart,position-1,n);
        
        return root;
        
    }
Node *buildTree(int in[], int post[], int n) {
    // Your code here
     int postorderindex=n-1;
        Node* ans= solve(in,post,postorderindex,0,n-1,n);
        return ans;
}
