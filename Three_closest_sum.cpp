
class Solution{
  public:
    int threeSumClosest(vector<int> a, int target) {
        int closestSum=1000000000;
        int n=a.size();
        sort(a.begin(),a.end());
        for(int i=0;i<n-2;i++){
            int p1=i+1,p2=n-1;
            int sum;
            while(p1<p2){
                sum=a[i]+a[p1]+a[p2];
                if(abs(target-sum)<=abs(closestSum-target))
                {
                    if(abs(target-sum)==abs(closestSum-target)){
                        if(closestSum<sum)
                            closestSum=sum;
                    }
                    else closestSum=sum;
                }
                // if(target==sum)
                // return target;
                if(sum>target)
                p2--; 
                else p1++;
            }
        }
        return closestSum;
        // Your code goes here
        
    }
};
