#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t,n,i,sum,j=0,a;
    cin>>t;
    while(t--)
    {

        sum=0;
        cin>>n;
    for(i=0;i<n;i++){
            cin>>a;
        if(a>0)
           sum+=a;
        }
        j++;
        cout<<"Case"<<" "<<j<<":"<<" "<<sum<<endl;

    }
}
