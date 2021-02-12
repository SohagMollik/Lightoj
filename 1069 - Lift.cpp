#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t,a,b,s,p,j=0,result;
    cin>>t;
    while(t--){
        cin>>a>>b;
        j++;
        if(b>a){
        s=b-a;
        p=a-0;
        result=((s*4)+3+5+3+(p*4)+3+5);
        cout<<"Case"<<" "<<j<<":"<<" "<<result<<endl;
        }
        else{
        s=a-b;
        p=a-0;
        result=((s*4)+3+5+3+(p*4)+3+5);
        cout<<"Case"<<" "<<j<<":"<<" "<<result<<endl;
        }
    }
}
