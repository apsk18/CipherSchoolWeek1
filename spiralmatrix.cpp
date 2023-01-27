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
    
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
        cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    
    int i, k = 0, l = 0;  
    while (k<m && l<n) {            
        for (i = l; i < n; ++i) {
            cout<<matrix[k][i]<<" ";
            }
            k++;  
            for (i = k; i < m; ++i) {
                cout<<matrix[i][n - 1]<< " ";
            }
            n--;             
            if (k < m) {
                for (i = n - 1; i >= l; --i) {
                    cout<<matrix[m - 1][i] << " ";
                }
                m--;
            }           
            if (l < n) {
                for (i = m - 1; i >= k; --i) {
                    cout<<matrix[i][l]<<" ";
                }
                l++;
            }
        }
  
    return 0;
}