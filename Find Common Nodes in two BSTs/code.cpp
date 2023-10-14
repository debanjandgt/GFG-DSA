class Solution
{
    public:
    //Function to find the nodes that are common in both BST. 
    vector <int> findCommon(Node *root1, Node *root2)
    {
        queue<Node*> q;
        q.push(root1);
        set<int> s1;
        while(!q.empty())
        {
            int n=q.size();
            while(n)
            {
                n--;
                Node* front = q.front();
                q.pop();

                s1.insert(front->data);

                if(front->left)
                q.push(front->left);

                if(front->right)
                q.push(front->right);
            }
        }
        
        q.push(root2);
        vector<int> answer;
        while(!q.empty())
        {
            int n=q.size();
            while(n)
            {
                n--;
               Node* front = q.front();
                q.pop();

                if(s1.find(front->data) != s1.end())
                answer.push_back(front->data);
                if(front->left)
                q.push(front->left);

                if(front->right)
                q.push(front->right);
            }
        }
        sort(answer.begin(),answer.end());
        return answer;
    }
};
