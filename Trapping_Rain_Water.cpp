class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int a[], int n){
        
        long long int ans=0;
        int f[n];
        int max=INT_MIN;
        for(int i=0;i<n;i++){
            if(a[i]>max){
                max=a[i];
            }
            f[i]=max;
        }
        int b[n];
        max=INT_MIN;
        for(int i=n-1;i>=0;i--){
            if(a[i]>max)
            max=a[i];
            b[i]=max;
        }
        
        for(int i=0;i<n;i++){
            int t=min(f[i],b[i]);
            ans+=(t-a[i]);
        }
        return ans;
        // code here
    }
};
