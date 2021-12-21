class Solution {
  public:
    // Function to return the count of the number of elements in
    // the intersection of two arrays.
    int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
        map<int,int> mp;
    int ans=0;
    if(n<m){
        for(int i=0;i<n;i++){
            mp[a[i]]++;
        }
        for(int i=0;i<m;i++){
            if(mp.find(b[i])!=mp.end()&&mp[b[i]]!=0){
                ans++;
                mp[b[i]]=0;
            }
        }
    }
    else{
        for(int i=0;i<m;i++){
            mp[b[i]]++;
        }
        for(int i=0;i<n;i++){
            if(mp.find(a[i])!=mp.end()&&mp[a[i]]!=0){
                ans++;
                mp[a[i]]=0;
            }
        }
    }
    return ans;
        // Your code goes here
    }
};
