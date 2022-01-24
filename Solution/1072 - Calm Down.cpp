#include<bits/stdc++.h>
#include<math.h>
#define pi acos(-1)
using namespace std;
int main ()
{
    int t,i=0;
    cin>>t;
    double r,result,s,n,p;

    while(t--){
        i++;
      cin>>r>>n;
      p=pi/n;
      s=sin(p);
     // cout<<fixed<<setprecision(6)<<s<<endl;
      result=(s*r/(1+s));
      cout<<"Case"<<" "<<i<<":"<<" "<<fixed<<setprecision(10)<<result<<endl;
   // printf("Case %d : ",i);
   // printf("%0.10lf\n",result);

    }
}
