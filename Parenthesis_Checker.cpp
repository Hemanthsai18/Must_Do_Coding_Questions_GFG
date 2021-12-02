class Solution
{
    public:
    bool match(char a,char b){
        if(a=='{'&&b=='}')
        return true;
        if(a=='('&&b==')')
        return true;
        if(a=='['&&b==']')
        return true;
        return false;
    }
    //Function to check if brackets are balanced or not.
    bool ispar(string s)
    {
        stack<char> stk;
        for(int i=0;i<s.length();i++){
            if(s[i]=='{'||s[i]=='('||s[i]=='[')
            stk.push(s[i]);
            else{
                if(stk.empty())
                return false;
                if(match(stk.top(),s[i])){
                    stk.pop();
                }
                else{
                    return false;
                }
            }
        }
        if(!stk.empty())
        return false;
        return true;
        
        // Your code here
    }
