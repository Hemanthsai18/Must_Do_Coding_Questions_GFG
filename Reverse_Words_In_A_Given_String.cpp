
class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    {
        stack<string> s;
        string temp="";
        for(int i=0;i<S.length();i++){
            if(S[i]=='.'){
                s.push(temp);
                temp="";
            }
            else{
                temp+=S[i];
            }
        }
        s.push(temp);
        string ans;
        while(s.size()>1){
            ans+=s.top();
            ans+=".";
            s.pop();
        }
        ans+=s.top();
        return ans;
        // code here 
    } 
};
