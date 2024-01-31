class Solution
{
  public:
    //Function to check if a string is Pangram or not.
    bool checkPangram (string s) {
        // your code here
        vector<int> freq(26,0);
        for(int i=0;i<s.size();i++)
        {
            int d=(int)s[i];
            if(d >= 65 && d <= 90)
            freq[d-'A']++;
            else if(d>=97 && d<=122)
            freq[d-'a']++;
        }
        for(auto i:freq)
        if(i == 0)https://media.geeksforgeeks.org/img-practice/prod/courses/5/Web/Content/Clock-4_1706701529.gif
        return 0;
        return 1;
    }

};
