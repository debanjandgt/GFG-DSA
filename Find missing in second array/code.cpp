class Solution{
	
	
	public:
	vector<int> findMissing(int a[], int b[], int n, int m) 
	{ 
	    // Your code goes here
	    vector<int> ans;
	    set<int> s1,s2;
	    for(int i=0;i<m;i++)
	    {
	        s1.insert(b[i]);
	    }
	    for(int i=0;i<n;i++)
	    {
	        if(s1.find(a[i]) == s1.end())
	        {
	            ans.push_back(a[i]);
	            s2.insert(a[i]);
	        }
	    }
	    return ans;
	} 
};
	
