#include<bits/stdc++.h>
using namespace std;
int main ()
{

int t,n,a,b;
cin>>t;
while(t--){
    cin>>n;
    if(n>10){
        a=n-10;
        b=10;
    cout<<a<<" "<<b<<endl;
    }
    else{
        a=0;
        b=n;
        cout<<a<<" "<<b<<endl;
    }
  }
}
