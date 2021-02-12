#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i=0;
    cin>>t;
    while(t--){
            i++;
        double r1,r2,h,p,r,v,pi;
        cin>>r1>>r2>>h>>p;
        r=((p*(r1-r2))/h)+r2;
        pi=acos(-1);
        v=(pi*p*(r*r+r2*r2+(r*r2)))/3;
        cout<<"Case"<<" "<<i<<":"<<" "<<setprecision(6)<<fixed<<v<<endl;

    }
}
