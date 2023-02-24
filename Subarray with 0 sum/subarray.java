class Solution{
    //Function to check whether there is a subarray present with 0-sum or not.
    static boolean findsum(int arr[],int n)
    {
        HashMap<Integer,Integer> map=new HashMap<>();
        int currSum=0;
        for(int i=0;i<arr.length;i++){
            currSum+=arr[i];
            if(currSum==0)
            return(true);
            if(map.containsKey(currSum-0))
            return(true);
            map.put(currSum,1);
        }
        return(false);
    }
}
