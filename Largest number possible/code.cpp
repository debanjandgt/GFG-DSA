class Solution{
public:
    string findLargest(int N, int S){
        // code here
         string ans = "";
        
        if(S==0 && N!=1) return "-1";
        
        while(N>0) {
            
            if(S>=9) {
                ans = ans + '9';
                S = S-9;
            }
            else if(S<9) {
                ans = ans + to_string(S);
                S = 0;
            }
            N--;
        }
        if(S!=0) return "-1";
        return ans;
    }
};
