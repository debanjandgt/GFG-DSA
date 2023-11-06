class Solution
{   
    public:
    //Function to return sum of upper and lower triangles of a matrix.
    vector<int> sumTriangles(const vector<vector<int> >& matrix, int n)
    {
        // code here
        long long sum=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                sum+=matrix[i][j];
            }
        }
        long long s1=sum,s2=sum;
        int t=0;
        for(int i=0;i<n;i++)
        {
            if(t >= 1)
            {
                int pos=0;
                while(pos < t)
                {
                    s1-=matrix[i][pos];
                    pos++;
                }
            }
            t++;
        }
        
        t=0;
        for(int i=n-1;i>=0;i--)
        {
            if(t >= 1)
            {
                int pos1=n-1,pos2=t;
                while(pos2 > 0)
                {
                    s2-=matrix[i][pos1];
                    pos1--;
                    pos2--;
                }
            }
            t++;
        }
        return {s1,s2};
    }
};
