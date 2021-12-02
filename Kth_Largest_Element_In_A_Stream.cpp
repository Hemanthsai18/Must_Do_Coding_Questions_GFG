class Solution {
  public:
    vector<int> kthLargest(int k, int a[], int n) {
        priority_queue<int,vector<int>, greater<int>> pq;
        vector<int> ans;
        
        for(int i=0;i<n;i++){
            
            if(pq.size()<k){
                pq.push(a[i]);
            }
            else{
                if(a[i]>pq.top()){
                    pq.pop();
                    pq.push(a[i]);
                }
            }
            if(pq.size()<k)
            ans.push_back(-1);
            else ans.push_back(pq.top());
            
        }
        return ans;
        // code here
    }
};
