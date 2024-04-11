
class Solution{
    public:
    // function to convert a given Gray equivalent n to Binary equivalent.
    string makeBinary(int n)
    {
        string temp;
        while(n)
        {
            int a=n%2;
            char ch=a+'0';
            temp=ch+temp;
            n/=2;
        }
        return temp;
    }
    long long Dec2Bin(string& fAns)
    {
        int t=0;
        long long ans=0;
       for(int i=fAns.size()-1;i>=0;i--)
       {
           if(fAns[i] == '1')
           {
               ans+=pow(2,t);
           }
           t++;
       }
        return ans;
    }
    int grayToBinary(int n)
    {
        if(n == 0)
        return 0;
        string binary=makeBinary(n);
       // cout << binary << endl;
        string fAns;
        fAns.push_back(binary[0]);
        char ch=binary[0];
        for(int i=1;i<binary.size();i++)
        {
            int b=binary[i]-'0';
            int a=ch-'0';
            int x=a^b;
            char c=x+'0';
            fAns.push_back(c);
            ch=c;
        }
        return Dec2Bin(fAns);
    }
};
