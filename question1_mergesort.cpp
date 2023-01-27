#include<bits/stdc++.h>
using namespace std;
void merge(vector<int>a,vector<int>b,int m,int n){
    int i=0;
    int j=0;
    vector<int>ans;
    while(i<m &&j<n){
        if(a[i]<=b[j]){
            ans.push_back(a[i]);
            i++;
        }
        else{
            ans.push_back(b[j]);
            j++;
        }
    }
        while(i<m)
        {ans.push_back(a[i]);i++;}
        while(j<n){
            ans.push_back(b[j]);j++;}
        
    
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
        }
  
}
int main()
{
    int m;
    cin>>m;
    vector<int>a;
    int x;
    for(int i=0;i<m;i++)
    {
        cin>>x;
        a.push_back(x);
    }
    int n;
    cin>>n;
    vector<int>b;
    int y;
    for(int i=0;i<n;i++)
    {
        cin>>y;
        b.push_back(y);
    }
    merge(a,b,m,n);
    return 0;
}