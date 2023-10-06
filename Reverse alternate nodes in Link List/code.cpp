#include<bits/stdc++.h>
class Solution
{
    public:
    void rearrange(struct Node *odd)
    {
       if(odd ->next != NULL)
       {
           struct Node* temp=odd;
           vector<struct Node*> vec1,vec2;
           int f=0;
           while(temp)
           {
               if(f == 0)
               vec1.push_back(temp);
               else if(f == 1)
               vec2.push_back(temp);
               temp=temp->next;
               f=!f;
           }
           for(int i=0;i<vec1.size()-1;i++)
           {
               vec1[i]->next=vec1[i+1];
           }
           reverse(vec2.begin(),vec2.end());
           vec1[vec1.size()-1]->next=vec2[0];
           for(int i=0;i<vec2.size();i++)
           {
               vec2[i]->next=vec2[i+1];
           }
           vec2[vec2.size()-1]->next=NULL;
       }
    }
};
