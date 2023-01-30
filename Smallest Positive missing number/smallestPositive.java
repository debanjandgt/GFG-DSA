class Solution
{
    //Function to find the smallest positive number missing from the array.
    static int missingNumber(int arr[], int size)
    {
        if(size == 1 && arr[0]!=1)
        return 1;
        Set<Integer> HS=new HashSet<>();
        int maxi=Integer.MIN_VALUE;
        int mini=Integer.MAX_VALUE;
        for(int i=0;i<size;i++){
                       maxi=Math.max(maxi,arr[i]);
            mini=Math.min(mini,arr[i]);
            HS.add(arr[i]);
            
        }
        for(int i=mini;i<=maxi;i++){
            if(!(HS.contains(i)) && i>0)
            return i;
        }
        return(maxi+1);
    }
}
