

//User function Template for Java


class Solution {
    public long kthElement( int arr1[], int arr2[], int n, int m, int k) {
        int arr[]=new int[n+m];
        int t=0;
        for(int i=0;i<n;i++){
        arr[i]=arr1[i];
        t++;
        }
        for(int i=0;i<m;i++)
        arr[t++]=arr2[i];
        Arrays.sort(arr);
        return((long)arr[k-1]);
    }
}
