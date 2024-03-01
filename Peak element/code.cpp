
/*Complete the function below*/

class Solution
{
	// Function to find the peak element
	// arr[]: input array
	// n: size of array a[]
	    public int peakElement(int[] arr,int n)
    {
       //add code here.
       for(int i=n-1;i>0;i--){
           if(arr[i]>=arr[i-1])
           return i;
       }
       
       return 0;
    }
}
