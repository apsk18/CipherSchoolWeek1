#include <bits/stdc++.h>
using namespace std;
 

int bSearch(int arr[], int low, int high, int target)
{
    if (high < low)
        return -1; 
    int mid = (low + high) / 2;
    if (target == arr[mid])
        return mid; 
    if (target > arr[mid])
        return bSearch(arr, (mid + 1), high, target); 
    return bSearch(arr, low, (mid - 1), target);
}

int findPivot(int arr[], int low, int high)
{
    
    if (high < low)
        return -1;
    if (high == low)
        return low;    
    int mid = (low + high) / 2;
    if (mid < high && arr[mid] > arr[mid + 1])
        return mid; 
    if (mid > low && arr[mid] < arr[mid - 1])
        return (mid - 1); 
    if (arr[low] >= arr[mid])
        return findPivot(arr, low, mid - 1); 
   return findPivot(arr, mid + 1, high);
}

int pivot(int arr[], int n, int target)
{
    int pivot = findPivot(arr, 0, n - 1);
    if (pivot == -1)
        return bSearch(arr, 0, n - 1, target);
  
    if (arr[pivot] == target)
        return pivot;
 
    if (arr[0] <= target)
        return bSearch(arr, 0, pivot - 1, target);
 
    return bSearch(arr, pivot + 1, n - 1, target);
} 

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n;i++)
    cin>>arr[i];
    int target;
    cin>>target; 
  
    cout << "Index of the element is :"<< pivot(arr,n,target); 
    return 0;
}