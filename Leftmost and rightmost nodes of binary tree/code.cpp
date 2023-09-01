void printCorner(Node *root)
{
queue<Node *> q;
q.push(root);
vector<vector<Node*>> vec;
while(!q.empty())
{
    int n=q.size();
    vector<Node*> v;
    while(n)
    {
        n--;
        Node* temp=q.front();
        q.pop();
        if(temp != NULL)
        {
            v.push_back(temp);
            if(temp->left)
            q.push(temp->left);
            if(temp->right)
            q.push(temp->right);
        }
    }
    vec.push_back(v);
}

for(auto it:vec)
{
    if(it.size() == 1)
    {
        cout << it[0]->data << " ";
    }
    else
    {
        cout << it[0]->data<< " ";
        cout << it[it.size()-1]->data<< " ";
    }
}

}
