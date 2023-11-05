class Solution
{
public:    
    
    int transitionPoint(int arr[], int n) {
        // code here
        int lo=0,hi=n-1,pos=-1;
        while(lo <= hi)
        {
            int mid=(lo+hi)/2;
            if(arr[mid] == 1)
            {
                pos=mid;
                hi=mid-1;
            }
            else
            lo=mid+1;
        }
        return pos;
        
    }
};
