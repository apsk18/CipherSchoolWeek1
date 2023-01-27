#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    int matrix[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];          
        }       
    }
    cout<<"Inputted matrix : "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
        cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    int target;
    cin>>target;
    bool ans=false;
    
    int row=0,col=n-1;
    while(row<n &&col>=0){
        if(target==matrix[row][col])
        {cout<<"Found in matrix at index "<<row+1<<" "<<col+1<<endl;ans=true; break;}
        else if(target>matrix[row][col])
        row++;
        else
        col--;        
    }
    if(ans==false)cout<<"Not found!"<<endl;
    return 0;
}