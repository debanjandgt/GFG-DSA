class Solution{
  public:
    int minDist(int a[], int n, int x, int y) {
        // code here
       int minDistance = 1e9;
        int index1 = -1, index2 = -1;
        
        for (int i = 0; i < n; i++)
        {
            if (a[i] == x)
                index1 = i;

            if (a[i] == y)
                index2 = i;

            
            if (index1 != -1 && index2 != -1)
                minDistance = min(minDistance, abs(index1 - index2));
        }
        
        if (minDistance == 1e9)
            return -1;
            
        return minDistance;
    }
};
