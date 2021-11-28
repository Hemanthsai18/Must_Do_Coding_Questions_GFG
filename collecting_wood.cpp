class Solution{
    public:
    int find_val(int tree[], int n, int h){
        int sum=0;
        for(int i=0;i<n;i++){
            if(tree[i]>h)
            sum+=(tree[i]-h);
        }
        return sum;
    }
    int find_height(int tree[], int n, int k)
    {
        int max=0;
        for(int i=0;i<n;i++){
            if(tree[i]>max)
            max=tree[i];
        }
        int low=0,high=max+1;
        int mid,found=0;
        while(low<=high){
            mid=(low+high)/2;
            if(find_val(tree,n,mid)==k)
            return mid;
            else if(find_val(tree,n,mid)<k)
            high=mid-1;
            
            else low=mid+1;
        }
            return -1;
        
        // code here
    }
};
