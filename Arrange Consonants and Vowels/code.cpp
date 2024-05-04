class Solution
{
    private:
    stack<char> vowel;
    stack<char> consonant;
    stack<char> finalStack;
    public:
    // task is to complete this function
    // function should return head to the list after making 
    // necessary arrangements
    struct Node* arrangeCV(Node *head)
    {
        struct Node* temp = head;
        
        while(temp != NULL){
            if(temp->data == 'a' || temp->data == 'e' || temp->data == 'i' || temp->data == 'o' || temp->data == 'u'){
                vowel.push(temp->data);
            } else{
                consonant.push(temp->data);
            }
            
            temp = temp->next;
        }
        
        // EMpty all stacks to new stack
        while(!consonant.empty()){
            finalStack.push(consonant.top());
            consonant.pop();
        }
        
        while(!vowel.empty()){
            finalStack.push(vowel.top());
            vowel.pop();
        }
        
        temp = head;
        
        while(!finalStack.empty()){
            temp->data = finalStack.top();
            finalStack.pop();
            temp = temp->next;
        }
        
        
        return head;
       //Code here
    }
};
