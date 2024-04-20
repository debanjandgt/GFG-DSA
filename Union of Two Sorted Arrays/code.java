class Solution
{
    //Function to return a list containing the union of the two arrays.
    public static ArrayList<Integer> findUnion(int arr1[], int arr2[], int n, int m)
    {
        TreeSet<Integer> TS=new TreeSet<>();
        for(int i=0;i<arr1.length;i++)
        TS.add(arr1[i]);
        for(int i=0;i<arr2.length;i++)
        TS.add(arr2[i]);
        ArrayList<Integer> al=new ArrayList<>(TS);
        return(al);
    }
}
