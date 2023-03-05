class Solution {
    int MissingNumber(int array[], int n) {
        
        Set<Integer> set=new HashSet<>();
        boolean f=true;
        int nos=0,t=0;
        for(int i=0;i<array.length;i++){
            int a=array[i];
            set.add(a);
        }
        for(int i=1;i<=n;i++){
            f=set.contains(i);
            if(f==false){
            nos=i;
            break;
            }
        }
        return(nos);
    }
}
