class Solution
{   
    public:
     struct VectorHash {
        size_t operator()(const std::vector<int>& v) const {
            std::hash<int> hasher;
            size_t result = 0;
            for (int i : v) {
                result = result * 31 + hasher(i);
            }
            return result;
        }
    };

    std::vector<int> repeatedRows(std::vector<std::vector<int>>& matrix, int M, int N) {
        std::unordered_map<std::vector<int>, int, VectorHash> m;
        int t = 0;
        std::vector<int> ans;
        for (const auto& i : matrix) {
            if (m.find(i) == m.end())
                m[i] = t;
            else
                ans.push_back(t);

            t++;
        }
        return ans;
    }

};
