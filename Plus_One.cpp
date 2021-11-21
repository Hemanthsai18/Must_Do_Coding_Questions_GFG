
class Solution {
  public:
    vector<int> increment(vector<int> a ,int n) {
        int c;
        a[n-1]++;
        if(a[n-1]==10){
            a[n-1]=0;
            c=1;
        }
        else{
            return a;
        }
        for(int i=n-2;i>=0;i--){
            a[i]++;
            if(a[i]==10){
                a[i]=0;
                c=1;
            }
            else return a;
        }
        if(c==1)
            a.insert(a.begin(),1);
            return a;
    
    
        // code here
    }
};
