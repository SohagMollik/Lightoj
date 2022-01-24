#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--){
     ll n,i,cnt1=0,j=10,binary=0;
     cin>>n;
     while(n!=0){
        i=n%2;
        binary=binary+(i*j);
        n/=2;
        j=j*10;
     }
     while(binary!=0){
        ll a=binary%10;
        binary/=10;
        if(a==1){
            cnt1++;
        }
     }
    // cout<<cnt<<endl;
     ll k,temp,binary1=0,s=10,cnt2=0;
     for(k=n;k<n+500;k++){
        while(k!=0){
        temp=n%2;
        binary1=binary1+(temp*s);
        k/=2;
        s=s*10;
     }
     while(binary1!=0){
        ll b=binary1%10;
        binary1/=10;
        if(b==1){
            cnt2++;
        }
        if(cnt1==cnt2){
            break;
        }
     }
}
cout<<k<<endl;
}
}
