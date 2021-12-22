class Solution{
	
	
	public:
	vector<long long> findMissing(long long a[], long long b[],  
                 int n, int m) 
	{ 
	    vector<long long > ans;
	    map<long,long> mp;
	    for(int i=0;i<m;i++){
	        mp[b[i]]++;
	    }
	    for(int i=0;i<n;i++){
	        if(mp.find(a[i])==mp.end()||mp[a[i]]==0){
	            ans.push_back(a[i]);
	        }
	    }
	    return ans;
	    // Your code goes here
	} 
};
