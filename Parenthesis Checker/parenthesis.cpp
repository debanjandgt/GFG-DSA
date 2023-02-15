class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        stack<char> s;
        for(int i=0;i<x.length();i++){
            if(x[i] == '{' || x[i] == '(' || x[i] == '[')
            s.push(x[i]);
            else
            {
                if(s.empty())
                return false;
                else{
                    if(x[i]==']'){
                        if(s.top()!='[')
                        return false;
                        else
                        s.pop();
                    }
                    if(x[i]=='}'){
                        if(s.top()!='{')
                        return false;
                        else
                        s.pop();
                    }
                    if(x[i]==')'){
                        if(s.top()!='(')
                        return false;
                        else
                        s.pop();
                    }
                }
            }
        }
        return s.empty();
    }

};
