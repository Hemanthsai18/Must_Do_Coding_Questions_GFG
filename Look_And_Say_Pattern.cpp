class Solution
{
  public:
    string lookandsay(int n) {
        string s="1";
        int count=1;
        while(count!=n){
            //cout<<"hi1";
            string temp="";
            int c=1;
            char ch=s[0];
            for(int i=1;i<s.length();i++){
                //cout<<"hi";
                if(ch==s[i])
                c++;
                else{
                    temp=temp+to_string(c)+ch;
                    //cout<<temp<<" ";
                    ch=s[i];
                    c=1;
                }
            }
            temp=temp+to_string(c)+ch;
            count++;
            s=temp;
            temp="";
            c++;
        }
        return s;
        // code here
    }   
};
