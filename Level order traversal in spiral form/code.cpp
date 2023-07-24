vector<int> findSpiral(Node *root)
{
    
    vector<vector<int>> a1;
    queue<Node*> q;
    q.push(root);
    while(!q.empty())
    {
        int n=q.size();
        vector<int> ans;
        while(n)
        {
            n--;
            Node* temp=q.front();
            q.pop();
            if(temp)
            ans.push_back(temp->data);
            
            if(temp->left)
            q.push(temp->left);
            
            if(temp->right)
            q.push(temp->right);
        }
        a1.push_back(ans);
    }
    vector<int> finalAns;
    int t=0;
    for(auto it:a1){
        if(t % 2 != 0){
        for(int i=0;i<it.size();i++)
        {
            finalAns.push_back(it[i]);
        }
        }
        else if(t % 2 == 0){
        for(int i=it.size()-1;i>=0;i--)
        {
            finalAns.push_back(it[i]);
        }
        }
        t++;
    }
    return finalAns;
}
