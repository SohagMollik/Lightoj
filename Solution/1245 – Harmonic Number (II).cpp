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
     ll res=0;
     for(ll i=1;i<=n;i++){
        res+=n/i;
     }
     j++;
     cout<<"Case "<<j<<": "<<res<<endl;
    }
}
