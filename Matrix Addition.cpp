#include<iostream>
using namespace std;

int main() {
    int r,c,n;
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
    int sum[n][n];    
    for (r=0;r<n;r++){
        for (c=0;c<n;c++){
            sum[r][c]=a[r][c]+b[r][c];

        }
    }
    for (r=0;r<n;r++){
        for (c=0;c<n;c++){
            cout<<sum[r][c]<<" ";
        }
    cout<<endl;}
}
