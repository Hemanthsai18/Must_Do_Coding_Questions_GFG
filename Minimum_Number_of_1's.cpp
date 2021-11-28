
class Solution {
  public:
    int canReach(int a[], int n) {
        int reach=0;
        for(int i=0;i<n;i++){
            if(reach<i)
            return 0;
            if((i+a[i])>reach)
            reach=i+a[i];
        }
        if(reach>=n-1)
        return 1;
        return 0;
        // code here 
    }
};
