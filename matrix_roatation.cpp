#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int matrix[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];          
        }
        cout<<endl;
    }
    cout<<"Original matrix: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
        }
    int transpose[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            transpose[i][j]=matrix[j][i];
    }
    }
        cout<<"Answer matrix: "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++){
            if((n-j-1)>j)
            {
                int index=n-j-1;
            swap(transpose[i][j],transpose[i][index]);     }       
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++){
            cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}