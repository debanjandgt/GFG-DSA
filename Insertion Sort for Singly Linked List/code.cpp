class Solution
{
    public:
    void solve(Node **root)
    {
        Node *head = *root;
        if(head == NULL)
        return ;
        
        solve(&head->next);
        
        int key = head->data;
        Node *n = head->next;
        while(n)
        {
            if(key > n->data)
            {
                head->data = n->data;
                head = n;
                n = head->next;
            }
            else break;
        }
        head->data = key;
    }
    Node* insertionSort(struct Node* head_ref)
    {
        //code here
        solve(&head_ref);
        return head_ref;
    }
    
};
