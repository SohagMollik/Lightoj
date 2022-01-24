#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i=0;
    cin>>t;
    while(t--){
        int x1,y1,x2,y2,x,y,m;
        cin>>x1>>y1>>x2>>y2;
        cin>>m;
        i++;
        cout<<"Case "<<i<<":"<<endl;
        while(m--){
            cin>>x>>y;
            if(x>x1&&x<x2&&y>y1&&y<y2){
              cout<<"Yes"<<endl;

            }
            else{
               cout<<"No"<<endl;

            }
        }
    }
}
