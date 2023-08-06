class Solution{
    public:
    
    // A[]: input array
    // N: size of array
    //Function to sort the array according to difference with given number.
    void sortABS(int A[],int N, int k)
    {
       vector<pair<int,pair<int,int>>> vec;
       for(int i=0;i<N;i++)
       {
           vec.push_back({abs(A[i]-k),{i,A[i]}});
       }
       sort(vec.begin(),vec.end());
       for(int i=0;i<vec.size();i++)
       {
           A[i]=vec[i].second.second;
       }
    }

};
