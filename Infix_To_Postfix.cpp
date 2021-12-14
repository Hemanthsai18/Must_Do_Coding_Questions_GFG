class Solution
{
    public:
    
    int val(char a){
        if(a=='+'||a=='-')
        return 1;
        if(a=='*'||a=='/')
        return  2;
        if(a=='^')
        return 3;
        return 0;
        
    }
    //Function to convert an infix expression to a postfix expression.
    string infixToPostfix(string exp)
    {
        string ans;
    stack<char> s;
    for(int i=0;i<exp.length();i++){
        if(exp[i]>='a'&&exp[i]<='z'||exp[i]>='A'&&exp[i]<='Z'){
            ans+=exp[i];
        }
        else if(exp[i]=='(')
        s.push(exp[i]);
        else if(exp[i]=='^')
        s.push(exp[i]);
        else if(exp[i]==')'){
            while(s.top()!='('){
                ans+=s.top();
                s.pop();
            }
            s.pop();
        }
        else {
            if(s.empty())
            s.push(exp[i]);
            else{
                if(val(exp[i])>val(s.top())){
                    s.push(exp[i]);
                }
                else{
                    while(!s.empty()&&val(exp[i])<=val(s.top())){
                        ans+=s.top();
                        s.pop();
                    }
                    s.push(exp[i]);
                    
                }
            }
        }
    }
    while(!s.empty()){
        ans+=s.top();
        s.pop();
    }
    return ans;
        // Your code here
    }
};
