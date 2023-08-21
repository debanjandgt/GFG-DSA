class Solution
{
    public:
    //Function to find largest rectangular area possible in a given histogram.
    vector<int> nextSmallerElement(long long arr[], int n) {
    stack<int> s;
    s.push(-1);
    vector<int> ans(n);

    for (int i = n - 1; i >= 0; i--) {
        int curr = arr[i];
        while (s.top() != -1 && arr[s.top()] >= curr) {
            s.pop();
        }
        ans[i] = s.top();
        s.push(i);
    }
    return ans;
}

vector<int> prevSmallerElement(long long arr[], int n) {
    stack<int> s;
    s.push(-1);
    vector<int> ans(n);

    for (int i = 0; i < n; i++) {
        int curr = arr[i];
        while (s.top() != -1 && arr[s.top()] >= curr) {
            s.pop();
        }
        ans[i] = s.top();
        s.push(i);
    }
    return ans;
}
    long long getMaxArea(long long arr[], int n)
    {
        // Your code here
         vector<int> next(n);
        next = nextSmallerElement(arr, n);

        vector<int> prev(n);
        prev = prevSmallerElement(arr, n);

        long long area = LLONG_MIN;
        for (int i = 0; i < n; i++) {
            long long l = arr[i];

            if (next[i] == -1) {
                next[i] = n;
            }
            long long b = next[i] - prev[i] - 1;
            long long newArea = l * b;
            area = max(area, newArea);
        }
        return area;
    }
};
