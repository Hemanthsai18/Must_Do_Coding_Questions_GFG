class Solution{
public:	
	int search(int a[], int n){
	    //code
	    int t=a[0];
	    for(int i=1;i<n;i++){
	        t^=a[i];
	    }
	    return t;
	    
	}
};
