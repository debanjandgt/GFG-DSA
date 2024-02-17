
class Solution {
    
    public boolean countSub(long arr[], long n)
    {
        // Your code goes here
        for(int i=0;i<n;i++)
        {
            int p1=(2*i)+1;
            int p2=(2*i)+2;
            if(p1 < n)
            {
                if(arr[p1] > arr[i])
                return false;
            }
            if(p2 < n)
            {
                if(arr[p2] > arr[i])
                return false;
            }
        }
        return true;
    }
}
