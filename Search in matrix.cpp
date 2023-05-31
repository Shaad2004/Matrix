#include<iostream>
using namespace std;

int main(){
    int x,n,m,r,c,f=0;
    cin>>n>>m>>x;
    int a[n][m];
    for (r=0;r<n;r++){
        for (c=0;c<m;c++){
            cin>>a[r][c];
        }
    }
    for (r=0;r<n;r++){
        for (c=0;c<m;c++){
            if (a[r][c]==x){
                f++;
            }
        }
    }
    if (f==0)
    cout<<1;
    else
    cout<<0;
}
