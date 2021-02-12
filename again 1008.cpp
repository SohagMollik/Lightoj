
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long int n,x,y,t,i=0;
    cin>>t;
    while(t--){
        cin>>n;
        i++;
        long long int sq=ceil(sqrt(n));
        long long int r=sq*sq-n;
        if(r<sq){
            y=r+1;
            x=sq;
        }
        else{
            x=2*sq-r-1;
            y=sq;
        }
        if(sq&1)
                swap(x,y);
        cout<<"Case"<<" "<<i<<":"<<" "<<x<<" "<<y<<endl;

    }

}

