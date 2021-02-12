#include<bits/stdc++.h>
using namespace std;
double s[1000001];
int main ()
{
    s[0]=0;
   for(int i=1;i<1000001;i++){
    s[i]=s[i-1]+log(i);
 }
 int t,i=0;
 cin>>t;
 long long n,b,ans;
 while(t--){
        i++;
    cin>>n>>b;
    ans=s[n]/log(b);
    cout<<"Case"<<" "<<i<<":"<<" "<<ans+1<<endl;
 }

}
