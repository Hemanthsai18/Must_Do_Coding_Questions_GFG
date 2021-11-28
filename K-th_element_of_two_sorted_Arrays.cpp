class Solution{
public:
    int kthElement(int a[], int b[], int n, int m, int k)
    {
        int t=0,ans=0;
        int i=0,j=0;
        while(i<n&&j<m){
            if(a[i]<b[j]){
                ans=a[i];
                i++;
                
            }
            else{ 
                ans=b[j];
                j++;
            }
            t++;
            if(t==k)
            return ans;
        }
        while(i<n){
            t++;
            if(t==k)
            return a[i];
            i++;
        }
        while(j<m){
            t++;
            if(t==k)
            return b[j];
            j++;
        }
        
    }
};
