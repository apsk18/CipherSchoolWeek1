#include<bits/stdc++.h>
using namespace std;

// vector<int>ans(2,-1);
// void firstandlast(int arr[],int n,int x){
//     cout<<"Brute force approach with complexity O(N)"<<endl;
//     int first=-1,last=-1;
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i]==x)
//         {
//             first=i;
//             break;
//         }
//     }
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i]==x &&i!=first)
//         last=i;
//     }
//     vector<int>v;
//     v.push_back(first);
//     v.push_back(last);
//     for(int i=0;i<2;i++)
//     cout<<v[i]<<" ";
//     cout<<endl;
// }

int bsearch_first(int arr[],int start,int end,int x){
    int first=-1;
    while(start<=end)
    {
    int mid= start+(end-start)/2;
    if(arr[mid]==x)
    {
       first=mid;
        end=mid-1;
    }
    else if(arr[mid]>x)
   end=mid-1;
   else if(arr[mid]<x)
   start=mid+1;
    }
    // cout<<"With binary search , output: "<<first<<endl;
    return first;
}
int bsearch_last(int arr[],int start,int end,int x){
    int last=-1;
    while(start<=end)
    {
    int mid= start+(end-start)/2;
    if(arr[mid]==x)
    {
       last=mid;
        start=mid+1;
    }
    else if(arr[mid]>x)
   end=mid-1;
   else if(arr[mid]<x)
   start=mid+1;
    }
    // cout<<"With binary search , output: "<<last<<endl;
   return last;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];   
    for(int i=0;i<n;i++)
    {
       cin>>arr[i];
    }
   int target;
   cin>>target;

    // firstandlast(arr,n,target);
    
    int f=bsearch_first(arr,0,n-1,target);
    int l=bsearch_last(arr,0,n-1,target);
    vector<int>v;
    v.push_back(f+1);
    v.push_back(l+1);

    cout<<"VECTOR<<: "<<v[0]<<" "<<v[1]<<endl;

    return 0;
}