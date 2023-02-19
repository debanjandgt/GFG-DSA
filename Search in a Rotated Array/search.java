class Solution
{
    int search(int A[], int l, int h, int key)
    {
        for(int i=0;i<A.length;i++)
        {
            if(A[i]==key)
            return(i);
        }
         return(-1);
    }
   
}
