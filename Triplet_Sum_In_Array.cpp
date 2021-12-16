class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int A[], int n, int X)
    {
        int a[100001];
        for(int i=0;i<100001;i++){
            a[i]=0;
        }
    for(int i=0;i<n;i++){
        a[A[i]]++;
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            a[A[i]]--;
            a[A[j]]--;
            int find=X-A[i]-A[j];
            
            if(find>=0&&a[find]>=1)
                return true;
            a[A[i]]++;
            a[A[j]]++;
        }
    }
    return false;
        //Your Code Here
    }

};
