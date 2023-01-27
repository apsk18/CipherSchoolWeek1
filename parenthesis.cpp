#include<bits/stdc++.h>
using namespace std;
void Parenthesis(int n, int open, int close,
                         string s, vector<string>& ans)
{
 
    if (open == n && close == n) {
        ans.push_back(s);
        return;
    }
   
    if (open < n) {
        Parenthesis(n, open + 1, close, s + "{",
                            ans);
    }
   
    if (close < open) {
        Parenthesis(n, open, close + 1, s + "}",
                            ans);
    }
}
int main()
{
    int n;
    cin>>n;        
    vector<string> ans;    
    Parenthesis(n,0,0,"",ans);   
    for (auto i : ans) {
        cout<<i<< endl;
    }
    return 0;
}