#include<bits/stdc++.h>
class Solution
{
    public:
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node* node)
    {
     queue<Node*> q;
      vector<int> v;
      q.push(node);
      while(!(q.empty())){
          Node *temp=q.front();
          v.push_back(q.front() -> data);
          q.pop();
          if( temp -> left )
          q.push(temp ->left);
          if( temp -> right )
          q.push(temp ->right);
      }
      
      return v;
    }
};
