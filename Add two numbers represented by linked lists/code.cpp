class Solution
{
    public:
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        struct Node* l1=first;
        struct Node* l2=second;
        stack<int> s1,s2;
        while(l1 != NULL)
        {
            s1.push(l1->data);
            l1=l1->next;
        }
        while(l2 != NULL)
        {
            s2.push(l2->data);
            l2=l2->next;
        }
         struct Node* result=NULL;
         int sum=0,carry=0;
        while(!s1.empty() || !s2.empty() || carry >= 1)
        {
           
            int v1=0,v2=0;
            if(!s1.empty())
            {
                v1=s1.top();
                s1.pop();
            }
            if(!s2.empty())
            {
                v2=s2.top();
                s2.pop();
            }
            sum=(v1+v2+carry)%10;
            carry=(v1+v2+carry)/10;
            struct Node* temp=new Node(sum);
            temp->next=result;
            result=temp;
        }
        return result;
    }
};
