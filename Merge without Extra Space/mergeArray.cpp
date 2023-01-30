class Solution{
    public:
        //Function to merge the arrays.
        void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            vector<long> v;
            for(int i=0;i<n;i++)
            v.push_back(arr1[i]);
            for(int i=0;i<m;i++)
            v.push_back(arr2[i]);
            sort(v.begin(),v.end());
            int t=0;
            while(t<n){
                arr1[t]=v[t];
                t++;
            }
            int k=0;
            
            while(k<m){
                arr2[k]=v[t];
                t++;
                k++;
            }
        } 
};
