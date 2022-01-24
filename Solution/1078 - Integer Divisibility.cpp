#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll solve(ll x,ll y)
{
    ll c=0,rem=0;
        while(1){
                rem=(rem*10+y)%x;
                c++;
            if(rem==0)break;
        }
        return c;
}
int main()
{
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,i=0;
    cin>>t;
    while(t--){
        ll x,y;
        cin>>x>>y;
        i++;
        cout<<"Case "<<i<<": "<<solve(x,y)<<endl;
    }
    return 0;

}
