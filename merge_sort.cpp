#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int start,int end)
{
    int mid=(start+end)/2;
    int len1=mid-start+1;
    int len2=end-mid;
    int temp1[len1];
    int temp2[len2];
    int index=start;
    for(int i=0;i<len1;i++)
    temp1[i]=arr[index++];

    for(int i=0;i<len2;i++)
    temp2[i]=arr[index++];

    index=start;

    int i=0,j=0;
    while(i<len1 &&j<len2){
        if(temp1[i]<temp2[j]){
            arr[index++]=temp1[i++];
    }
    else if(temp1[i]>temp2[j]){
        arr[index++]=temp2[j++];
         }
    }
    while(i<len1)
    arr[index++]=temp1[i++];

    while(j<len2)
    arr[index++]=temp2[j++];
}

void mergeSort(int arr[],int start,int end){
    if(start>=end)
    return;
    int mid=(end+start)/2;
    // cout<<"Till here1"<<endl;
    mergeSort(arr,start,mid);
    //   cout<<"Till here2"<<endl;
    mergeSort(arr,mid+1,end);
    //   cout<<"Till here3"<<endl;
    merge(arr,start,end);
    //   cout<<"Till here4"<<endl;

}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }    
    int start=0,end=n-1;
    cout<<"Array before sorting"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    mergeSort(arr,start,end);
    cout<<"Array after sorting"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}