class Solution{
    public:
    string Reduced_String(int k,string s){
        if(k==1)
        return "";
        stack<pair<char,int>> stk;
        for(int i=0;i<s.length();i++){
            if(stk.empty()){
                stk.push({s[i],1});
            }
            else if(stk.top().first==s[i]){
                stk.top().second++;
                if(stk.top().second==k){
                    stk.pop();
                }
            }
            else if(stk.top().first!=s[i]){
                stk.push({s[i],1});
            }
            
            
        }
        string ans;
        while(!stk.empty()){
            while(stk.top().second){
                ans+=stk.top().first;
                stk.top().second--;
            }
            stk.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
