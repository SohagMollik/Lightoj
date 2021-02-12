#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row,col,i,j,t;
    cin>>t;
    while(t--){
    cin>>row>>col;
    int a[row][col];
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            cin>>a[i][j];
        }
    }
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
}
}

