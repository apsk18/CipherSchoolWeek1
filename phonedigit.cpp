#include <bits/stdc++.h>
using namespace std;

void combination(vector<char>mapping[], int input[],
                      string res, int index, int n)
{    
    if (index == n) {
        cout << res << " ";
        return;
    }
    int digit = input[index];
    int len =mapping[digit].size();
    for (int i = 0; i < len; i++) {
        combination(mapping, input,res +mapping[digit][i], index + 1,n);
    }
}
 
// Driver Code
int main()
{
    string str;
    cin>>str;
    int len=str.length();
    int input[len];
    for(int i = 0; i<len;i++){
        input[i]=str[i]-'0';
    }
   
    vector<char>mapping[]= { {},{},
            { 'a', 'b', 'c' },
            { 'd', 'e', 'f' },
            { 'g', 'h', 'i' },
            { 'j', 'k', 'l' },
            { 'm', 'n', 'o' },
            { 'p', 'q', 'r', 's' },
            { 't', 'u', 'v' },
            { 'w', 'x', 'y', 'z' } 
            };    
  
    combination(mapping, input, string(""), 0, len);
 
    return 0;
}