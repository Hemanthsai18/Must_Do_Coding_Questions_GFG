
class Solution {
  public:
    int maxValue(int a[], int n) {
        
        int ai[n],aj[n];
        int i,j;
        for(i=0;i<n;i++){
            ai[i]=a[i]+i; 
            aj[i]=a[i]-i;
        }
        int max1=INT_MIN,min1=INT_MAX,max2=INT_MIN,min2=INT_MAX;
        for(i=0;i<n;i++){
            if(max1<ai[i])
            max1=ai[i];
            if(min1>ai[i])
            min1=ai[i];
            if(max2<aj[i])
            max2=aj[i];
            if(min2>aj[i])
            min2=aj[i];
        }
        int high,low;
        high=max1-min1;
        low=max2-min2;
        return max(high,low);
        
        
        
        
        // code here
    }
};
