#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t,n,temp,rev,mod,i=0;
    cin>>t;
    while(t--){
        cin>>n;
        temp=n;
        rev=0;
        i++;
         while(n!=0){
              mod=n%10;
              rev=rev*10+mod;
              n/=10;
            }
        if(rev==temp){
         cout<<"Case"<<" "<<i<<":"<<" "<<"Yes"<<endl;
         }
         else{
          cout<<"Case"<<" "<<i<<":"<<" "<<"No"<<endl;
}
    }
}
