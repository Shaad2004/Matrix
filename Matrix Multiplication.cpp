#include<iostream>
using namespace std;

int main() {
    int r,c,n,k,s;
    cin>>n;
    int a[n][n];
    for (r=0;r<n;r++)
        {for (c=0;c<n;c++){
            cin>>a[r][c];
            }
        }
    int b[n][n];
    for (r=0;r<n;r++){
        for (c=0;c<n;c++){
            cin>>b[r][c];
        }
    } 
    int m[n][n];    
    for (r=0;r<n;r++){
        for (c=0;c<n;c++){
            s=0;
            for (k=0;k<n;k++) {
              s=s+a[r][k]*b[k][c]; 
            }
            
        m[r][c]=s;
        }
    }
    for (r=0;r<n;r++){
        for (c=0;c<n;c++){
            cout<<m[r][c]<<" ";
        }
    cout<<endl;}
}
