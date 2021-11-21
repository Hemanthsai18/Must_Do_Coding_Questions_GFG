
class Solution{
    public:
    int searchInsertK(vector<int>a, int n, int k)
    {
        int mid;
        int low=0;
        int high=n-1;
        while(low<=high){
            mid=(low+high)/2;
            if(k>a[mid]){
                low=mid+1;
            }
            if(k<a[mid]){
                high=mid-1;
            }
            if(k==a[mid]){
                return mid;
            }
        }
        if(a[mid]>k)
        return mid;
        return mid+1;
        // code here
    }
};
