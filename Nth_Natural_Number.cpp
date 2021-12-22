class Solution{
	public:
    	long long findNth(long long n)
    {
        long long int ans=0,p=1;
        while(n>0){
            ans+=(p*(n%9));
            n/=9;
            p*=10;
        }
        return ans;
        // code here.
    }
};
