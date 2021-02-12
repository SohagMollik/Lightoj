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
        ll a[n],i;
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        ll mx=a[0];
        for(i=0;i<n;i++){
            if(a[i]>=mx)
                mx=a[i];
        }
        j++;
        cout<<"Case "<<j<<": "<<mx<<endl;
    }
}
