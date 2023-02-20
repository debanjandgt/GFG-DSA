class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        map<Node*,bool> m;
        Node* copy=head;
        while(copy!= NULL){
            if(m[copy] == true)
            return true;
            m[copy]=true;
            copy = copy -> next;
        }
        return false;
    }
};
