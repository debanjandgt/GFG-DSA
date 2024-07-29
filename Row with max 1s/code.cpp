class Solution {
    public int rowWithMax1s(int arr[][]) {
        // code here
        int max=0,count=0,pos=0;
        for(int i=0;i<arr.length;i++){
            count=0;
            for(int j=0;j<arr[0].length;j++){
                if(arr[i][j]==1)
                count++;
                if(count>max)
                {
                    max=count;
                    pos=i;
                }
            }
        }
        if(max==0)
        return(-1);
        return(pos);
    }
}
