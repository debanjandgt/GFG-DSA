class Solution
{
    public:
    void rvrs(Node** head){
        Node *prev = nullptr, *cur = *head, *N;
        
        while(cur){
            
            N = cur->next;
            cur->next = prev;
            prev = cur;
            cur = N;
        
        }
        *head = prev;
    }
    
    // your task is to complete this function
    void sort(Node **head)
    {
         Node* cur = *head;
         if(cur == nullptr || cur->next == nullptr) return;
         Node* Asc = *head, *Desc = cur->next;
         Node* AscHead = nullptr, *DescHead = nullptr, *AscTail = nullptr, *DescTail = nullptr;
         
         AscHead = *head;
         DescHead = cur->next;
         while(DescHead && DescHead->next){
             //init AscTail and DescHead
             AscTail = AscHead; DescTail = DescHead;
             //change the next pointers for AscHead and DescHead
             AscHead = AscTail->next = DescTail->next;
             DescHead = DescTail->next = AscHead->next;
             
         }
         //AscTail ->next = head;
         rvrs(&Desc);
         AscHead->next = Desc;
    }
};
