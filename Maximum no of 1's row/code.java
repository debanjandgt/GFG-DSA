

//User function Template for Java

class Sol
{
    public static int maxOnes (int Mat[][], int N, int M)
    {
        int count=0,max=0,max_row=-1;
        for(int i=0;i<N;i++){
            count=0;
            for(int j=0;j<M;j++){
                if(Mat[i][j]==1)
                count++;
            }
            if(count>max){
            max=count;
            max_row=i;
            }}
            return(max_row);
    }
}
