#include<bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int zero=0,one=0,two=0;
    for(int i=0; i<n;i++){
        cin>>arr[i];
        if(arr[i]==0)
        zero++;
        else if(arr[i]==1)
        one++;
        else two++;
    }
    int index=0;
    int j=0;
    while(j<zero)
   { arr[index++]=0;j++;}
   j=0;
    while(j<one)
   { arr[index++]=1;j++;}
   j=0;
    while(j<two)
   { arr[index++]=2;j++;}

   for(int i=0; i<n; i++)
   cout<<arr[i]<<" ";



    return 0;
}