class Solution
{
    public:
        /*You are required to complete below method */
        int sumOfLeafNodes(Node *r ){
             /*Your code here */
              if(r == NULL)
     return 0;
     if(r->left == NULL && r->right == NULL)
     return r->data;
     int lh=sumOfLeafNodes(r->left);
     int rh=sumOfLeafNodes(r->right);
     return lh+rh;
        }
       
};
