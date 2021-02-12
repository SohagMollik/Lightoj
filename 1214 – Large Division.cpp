#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t,j=0;
    scanf("%lld",&t);
    while(t--){
        string a;
        ll b,i,l,rem=0;
        cin>>a>>b;
        if(a[0]=='-')
            i=1;
        else
            i=0;
       l=a.length();
       for( ;i<l;i++){
        rem=rem*10+(a[i]-'0');
        rem=rem%b;
       }
       j++;
       printf("Case %lld: ",j);
       if(rem)
        printf("not divisible\n");
        else
         printf("divisible\n");
    }

}
