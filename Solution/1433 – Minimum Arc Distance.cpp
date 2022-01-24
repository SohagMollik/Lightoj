#include<bits/stdc++.h>
#include<math.h>
//#define pi 3.14159265
using namespace std;
int main()
{
    int t,i=0;
    cin>>t;
    while(t--){
        double ox,oy,ax,ay,bx,by,oa,s,ab,k,kon,arc,pi;
        cin>>ox>>oy>>ax>>ay>>bx>>by;
        i++;
        oa=sqrt((ox-ax)*(ox-ax)+(oy-ay)*(oy-ay));
        ab=sqrt((bx-ax)*(bx-ax)+(by-ay)*(by-ay));
        k=ab/(oa*2);
        pi=acos(-1);
        kon=2*asin(k)*180/pi;
        s=(kon*pi)/180;
        arc=oa*s;
        cout<<"Case"<<" "<<i<<":"<<" "<<setprecision(5)<<fixed<<arc<<endl;
    }
}
