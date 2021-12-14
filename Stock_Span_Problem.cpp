class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int price[], int n)
    {
        vector<int> ans;
        stack<pair<int,int>> s;
        s.push({price[0],0});
        ans.push_back(1);
        for(int i=1;i<n;i++){
            if(s.top().first>price[i]){
                s.push({price[i],i});
                ans.push_back(1);
            }
            else{
                while(!s.empty()&&s.top().first<=price[i]){
                    s.pop();
                }
                if(s.empty()){
                    ans.push_back(i+1);
                }
                else {
                    ans.push_back(i-s.top().second);
                }
                s.push({price[i],i});
            }
        }
        return ans;
       // Your code here
    }
};
