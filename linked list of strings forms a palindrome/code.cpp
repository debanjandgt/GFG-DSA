class Solution {
  public:
    bool compute(Node* head) {
        // Your code goes here
        string txt="";
        while(head)
        {
            txt+=head->data;
            head=head->next;
        }
        int i=0;
        int r=txt.size()-1;
        while(i<r)
        {
            if(txt[i] != txt[r])
            return false;
            i++;
            r--;
        }
        return true;
    }
};
