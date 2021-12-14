
class Solution
{
    public:
    unsigned int reverseBits(unsigned int n)
    {
        unsigned int ans=0;
        vector<int> s;
        
        while(n>0){
            s.push_back(n%2);
            n/=2;
        }
        reverse(s.begin(),s.end());
        for(int i=0;i<s.size();i++){
            ans+=(s[i]*(pow(2,i)));
        }
        return ans;
        
        //code here
    }
};
