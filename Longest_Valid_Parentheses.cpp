class Solution{
public:
    int maxLength(string S){
        stack<int> stk;
        int a[S.length()];
        for(int i=0;i<S.length();i++){
            a[i]=0;
        }
        for(int i=0;i<S.length();i++){
            if(S[i]=='(')
            stk.push(i);
            else {
                if(!stk.empty()){
                    a[i]=1;
                    a[stk.top()]=1;
                    stk.pop();
                }
            }
        }
        // for(int i=0;i<S.length();i++){
        //     cout<<a[i]<<" ";
        // }
        int gMax=0,max=0;
        for(int i=0;i<S.length();i++){
            if(a[i]==1){
                max++;
            }
            else{
                if(gMax<max)
                gMax=max;
                max=0;
            }
        }
        if(gMax<max)
        gMax=max;
        return gMax;
        // code here
    }
};
