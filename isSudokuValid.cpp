// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int isValid(vector<vector<int>> mat){
        vector<vector<int>> columns(9),rows(9);
        for(int i=0;i<9;i+=3){
            for(int j=0;j<9;j+=3){
                vector<int> sq;
                for(int ii=i;ii<i+3;ii++){
                    for(int jj=j;jj<j+3;jj++){
                        if(mat[ii][jj]==0)
                        continue;
                        if(find(columns[jj].begin(),columns[jj].end(),mat[ii][jj])==columns[jj].end()){
                            columns[jj].push_back(mat[ii][jj]);
                        }
                        else return 0;
                        if(find(rows[ii].begin(),rows[ii].end(),mat[ii][jj])==rows[ii].end()){
                            rows[ii].push_back(mat[ii][jj]);
                        }
                        else return 0;
                        if(find(sq.begin(),sq.end(),mat[ii][jj])==sq.end())
                        sq.push_back(mat[ii][jj]);
                        else return 0;
                    }
                }
                sq.clear();
            }
        }
        return 1;
        // code here
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        vector<vector<int>> mat(9, vector<int>(9, 0));
        for(int i = 0;i < 81;i++)
            cin>>mat[i/9][i%9];
        
        Solution ob;
        cout<<ob.isValid(mat)<<"\n";
    }
    return 0;
}  // } Driver Code Ends
