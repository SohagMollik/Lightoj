#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t,j=0;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll i,sum=0;
        for(i=2;i<=sqrt(n)+1;i++){
            //if(n%i==0&&(n/i==i)){
               // sum+=i;
            //}
            if(n%i==0){
                sum+=i+n/i;
            }
        }
        j++;
        cout<<"Case "<<j<<": "<<sum<<"\n";
    }
}
