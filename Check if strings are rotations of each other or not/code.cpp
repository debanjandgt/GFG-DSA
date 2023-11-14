class Solution
{
    public:
    //Function to check if two strings are rotations of each other or not.
    bool areRotations(string s1,string s2)
    {
        // Your code here
        if(s1.size() != s2.size())
        return 0;
        deque<char> d1,d2;
        for(int i=0;i<s1.size();i++)
        {
            d1.push_back(s1[i]);
            d2.push_back(s2[i]);
        }
        int i=0,n=d1.size();
        while(i<n)
        {
            if(d1 == d2)
            return true;
            else
            {
                i++;
                char c=d1.front();
                d1.pop_front();
                d1.push_back(c);
            }
        }
        return false;
    }
};
