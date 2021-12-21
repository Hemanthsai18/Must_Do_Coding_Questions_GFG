class Solution {
    public:
        int isValid(string s) {
            int i=0;
            int count=0;
            int sum=0;
            int dotCount=0;
            while(i<s.length()){
                if(s[i]!='.'){
                    count++;
                    if(count>3)
                    return 0;
                    sum=sum*10+(s[i]-48);
                    if(sum>255)
                    return 0;
                }
                else{
                    if(sum>=0&&sum<=9&&count!=1)
                    return 0;
                    if(sum>=10&&sum<=99&&count!=2)
                    return 0;
                    if(sum>=100&&sum<=255&&count!=3)
                    return 0;
                    dotCount++;
                    if(dotCount>3)
                    return 0;
                    count=0;
                    sum=0;
                }
                i++;
            }
            if(sum>=0&&sum<=9&&count!=1)
                    return 0;
                    if(sum>=10&&sum<=99&&count!=2)
                    return 0;
                    if(sum>=100&&sum<=255&&count!=3)
                    return 0;
            if(dotCount!=3)
            return 0;
            if(count>3)
                    return 0;
                    if(sum>255)
                    return 0;
            // code here
            return 1;
        }
        
};
