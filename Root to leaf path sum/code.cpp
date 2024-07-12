class Solution
{
    public:
    bool solve(Node* root,vector<vector<int>>& finalAns,vector<int> ans
    ,int sum,int targetSum)
    {
        if(root == NULL)
        return false;
        if(root->left== NULL && root->right ==NULL)
        {
            if(sum+root->data == targetSum)
            {
                return true;
            }
        }
      

        int elem =root->data;
        sum+=elem;
      
        bool left=solve(root->left,finalAns,ans,sum,targetSum);
        bool right=solve(root->right,finalAns,ans,sum,targetSum);
        if(left | right == true)
        return true;
        sum-=elem;
     
        return false;
        
    }
    bool hasPathSum(Node *root, int S) {
    vector<vector<int>> finalAns;
        vector<int> ans;
        int sum=0;
        
        return solve(root,finalAns,ans,sum,S);
}
};
