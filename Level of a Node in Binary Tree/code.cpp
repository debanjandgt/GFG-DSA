class Solution{
  public:
    // function should return level of the target node
    int getLevel(struct Node *node, int target)
    {
    	queue<struct Node*> q;
        q.push(node);
       
        vector<vector<int>> vv;
        while(!q.empty())
        {
            int n=q.size();
             vector<int> ans;
            while(n)
            {
                n--;
                struct Node* front = q.front();
                q.pop();

               ans.push_back(front->data);

                if(front->left)
                q.push(front->left);

                if(front->right)
                q.push(front->right);
            }
           
            vv.push_back(ans);
        }
        int c=1,t=0;
        for(auto it:vv)
        {
            for(int i=0;i<it.size();i++)
            {
                if(it[i] == target)
                {
                    t=1;
                    return c;
                }
            }
            c++;
        }
        if(t == 0)
        return 0;
       
    }
    
};
