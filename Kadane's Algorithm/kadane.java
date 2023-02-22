class Solution{

    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long maxSubarraySum(int arr[], int n){
        int max=arr[0],sum=0;
        for(int i=0;i<arr.length;i++){
            sum=sum+arr[i];
            max=Math.max(max,sum);
            if(sum<0)
            sum=0;
        }
        return(max);
        
    }
    
}
