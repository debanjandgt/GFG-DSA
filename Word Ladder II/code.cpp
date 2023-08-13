class Solution {
public:
    vector<vector<string>> findSequences(string beginWord, string endWord, 
    vector<string>& wordList) {
        // code here
        unordered_set<string> st(wordList.begin(),wordList.end());
        queue<vector<string>> q;
        q.push({beginWord});
        vector<vector<string>> ans;
        vector<string> usedOnLevel;
        usedOnLevel.push_back(beginWord);
        int level=0;
        while(!q.empty())
        {
            vector<string> vec=q.front();
            q.pop();
            string word=vec.back();
            if(vec.size() > level)
            {
                   level++;
                for(auto it:usedOnLevel)
                {
                    st.erase(it);
                }
            }
            if(word == endWord)
            {
                if(ans.size() == 0)
                ans.push_back(vec);
                
                else
                {
                    if(ans[0].size() == vec.size())
                    ans.push_back(vec);
                }
            }
            
            for(int i=0;i<word.size();i++)
            {
                char original=word[i];
                for(char c='a';c<='z';c++)
                {
                    word[i]=c;
                    if(st.find(word) != st.end())
                    {
                        vec.push_back(word);
                        q.push(vec);
                        vec.pop_back();
                        usedOnLevel.push_back(word);
                    }
                }
                word[i]=original;
            }
        }
        return ans;
    }
};
