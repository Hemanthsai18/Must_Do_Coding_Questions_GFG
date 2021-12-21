class Solution{
    public:
    int findSubArraySum(int a[], int n, int k)
    {
        int h[n];
        int ans=0;
        h[0]=a[0];
        unordered_map<int,int> mp;
        mp.insert({h[0],1});
        for(int i=1;i<n;i++){
            h[i]=h[i-1]+a[i];
            if(h[i]==k)
            ans++;
            if(mp.find(h[i])==mp.end())
            mp.insert({h[i],1});
            else mp[h[i]]++;
            int t=(h[i]-k);
            if(mp.find(t)!=mp.end())
                ans+=(mp[t]);
            // if(h[i]==k)
            // ans++;
        }
        
        //cout<<count<<" ";
        return ans;
        
        // code here
    }
};
