#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,c;
    long long int fact,n,s;
    cin>>t;
    while(t--){
        cin>>n;
        fact=1,c=0;
        for(i=1;i<=n;i++){
            fact*=i;
        }
        s=fact;
        while(s!=0){
            s=s/10;
            c++;
        }
        cout<<c<<endl;
    }
}
