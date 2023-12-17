class Solution{
public:	
	// calculate the maximum sum with out adjacent
	int findMaxSum(int *arr, int n) {
	    int prev=arr[0];
	    int prev2=0;
	    int curr;
	    int take,nonTake;
	    for(int i=1;i<n;i++)
	    {
	        take=arr[i];
	        if(i>1)
	        take+=prev2;
	        nonTake=0+prev;
	        curr=max(take,nonTake);
	        prev2=prev;
	        prev=curr;
	    }
	    return prev;
	}
};
