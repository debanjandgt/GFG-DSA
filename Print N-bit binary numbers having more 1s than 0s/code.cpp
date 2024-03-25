class Solution{
public:	
    string binary;
    int size;
    bool solve(int n)
    {
        string temp;
        while(n)
        {
            int a=n%2;
            char aa=a+'0';
            
            temp=aa+temp;
            n=n/2;
        }
        if(temp[0] == '0')
        return false;
        if(temp.size() < size)
        return false;
        vector<int> ones(temp.size(),0);
        vector<int> zero(temp.size(),0);
        int OC=0;
        int ZC=0;
        for(int i=0;i<temp.size();i++)
        {
            if(temp[i] == '0')
            ++ZC;
            else
            ++OC;
            
            ones[i]=OC;
            zero[i]=ZC;
            if(zero[i] > ones[i])
            return false;
        }
        
        for(int i=0;i<temp.size();i++)
        {
             
            if(ones[i] < zero[i])
            return false;
        }
        binary.resize(temp.size());
        binary=temp;
        return true;
    }
	vector<string> NBitBinary(int n)
	{
	    // Your code goes here
	    int maxNum=pow(2,n) - 1;
	    int cnt = n;
	    size=n;
	    vector<string> vec;
	    while(maxNum >= n)
	    {
	        bool ans=solve(maxNum);
	        if(ans)
	        {
	            cnt--;
	            vec.push_back(binary);
	        }
	        maxNum--;
	    }
	    return vec;
	}
};
