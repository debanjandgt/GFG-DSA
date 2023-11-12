class Solution{   
public:
    string printMinNumberForPattern(string S){
      
      vector<int> result;  // Vector to store the generated number
        vector<int> stack;   // Vector to keep track of increasing sequence
        int num = 1;             // Counter for increasing numbers

        for (char ch : S) {
            stack.push_back(num);
            num++;

            if (ch == 'I') {
                // If 'I' is encountered, add the reversed stack to the result
                result.insert(result.end(), stack.rbegin(), stack.rend());
                stack.clear();
            }
        }

        // Add the remaining numbers to the result
        stack.push_back(num);
        result.insert(result.end(), stack.rbegin(), stack.rend());

        // Convert the vector of digits to an integer and return
       string finalResult = "";
        for (int digit : result) {
            finalResult = finalResult +to_string(digit);
        }

        return finalResult;  // code here 
    }
};
