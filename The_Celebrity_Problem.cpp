class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        stack<int> s;
        for(int i=0;i<n;i++){
            s.push(i);
        }
        int a,b;
        while(s.size()>1){
            a=s.top();
            s.pop();
            b=s.top();
            s.pop();
            if(M[a][b]==1)
            s.push(b);
            else if(M[b][a]==1)
            s.push(a);
        }
        // code here 
        if(s.empty())
        return -1;
        a=s.top();
        for(int i=0;i<n;i++){
            if(i!=a){
                if(M[i][a]!=1)
                return -1;
            }
        }
        for(int i=0;i<n;i++){
            if(i!=a){
                if(M[a][i]!=0)
                return -1;
            }
        }
        return s.top();
    }
};
