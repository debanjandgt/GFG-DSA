class Solution{
    static long maximumSumSubarray(int K, ArrayList<Integer> Arr,int N){
        // code here
         
        long max=0L;
        long sum=0L;
        for(int i=0;i<K;i++){
            sum+=Arr.get(i);
            max=sum;
        }
        for(int i=1;i<=N-K;i++){
            sum=sum-Arr.get(i-1)+Arr.get(i+K-1);
            if(max<sum)
         max=sum;
            
        }
        
         
        return max;
    }
}
