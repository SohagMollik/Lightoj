#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,c,q,sum=1;
        cin>>a>>b;
        ll s=b;
        c=0;
       // sum*=10+s;
        if(b%a!=0){
        while(b%a==0){

            b*=10+s;
            c++;
            cout<<b<<" ";
        }
       // cout<<c<<endl;
        }
        //cout<<endl;
        //cout<<c<<endl;
    }
}
