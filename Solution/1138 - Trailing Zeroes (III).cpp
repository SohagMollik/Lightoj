#include<bits/stdc++.h>
#define ll    long long
#define pb    push_back
#define ull   unsigned long long
#define f     first
#define s     second
#define mod   1000000007
#define pi    acos(-1.0)
#define fast  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
ll zero(ll n)
{
    ll TrailZero=0;
    ll r=5;
    while(r<=n)
    {
        TrailZero+=(n/r);
        r*=5;
    }
    return TrailZero;
}
int main()
{
    //fast;
    int t;
    cin>>t;
    int x=1;
    while(t--)
    {
        ll n;
        cin>>n;
        ll low=1,high=400000015;//because  400000015  factorial  contain 100000000  trail zero.
        ll answer=-1;
        while(low<=high){
        ll mid=(low+high)/2;
        ll Q=zero(mid);
            if(Q>n){
                high=mid-1;
            }
            else if(Q<n){
                low=mid+1;
            }
            else{
                answer=mid;
                high=mid-1;
            }
        }
        if(answer==-1)
            cout<<"Case "<<x<<": "<<"impossible\n";
        else
            cout<<"Case "<<x<<": "<<answer<<endl;
        x++;
    }

    return 0;
}
