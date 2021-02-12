#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--){
        string m1,m2;
        int d1,d2,y1,y2,c=0;
        cin>>m1>>d1>>y1;
        cin>>m2>>d2>>y2;
        for(int i=y1;i<=y2;i++){
                c=0;
            if(i%4==0||i%100!=0||i%400==0)
                c++;
        }
        cout<<c<<endl;
    }
}
