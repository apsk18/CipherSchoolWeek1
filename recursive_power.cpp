#include<bits/stdc++.h>
using namespace std;

int power(int num,int r){
    if(r==0)
    return 1;
    if(r==1)
    return num;
    int ans=power(num,r/2);
    if(r%2==0)
    return ans*ans;
    else
    return num*ans*ans;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int num,r;
    cin>>num>>r;
    int ans=power(num,r);
    cout<<ans<<endl;
        return 0;
}