#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t,a[3],i,j=0;
    cin>>t;
    while(t--){
            j++;
        for(i=0;i<3;i++){
            cin>>a[i];
        }
        sort(a,a+3);

            if(a[2]*a[2]==(a[0]*a[0]+a[1]*a[1]))
            cout<<"Case"<<" "<<j<<":"<<" "<<"yes"<<endl;
            else
            cout<<"Case"<<" "<<j<<":"<<" "<<"no"<<endl;


    }
}
