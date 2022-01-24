#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t,j;
    cin>>t;
   for(j=1;j<=t;j++){
        int n,k;
        cin>>n;
        int total=0;
        string s;
        cout<<"Case"<<" "<<j<<":"<<endl;
        for(int i=0;i<n;i++){
           cin>>s;
           if(s=="donate"){
            cin>>k;
            total+=k;
           }
           else{

            cout<<total<<endl;
           }

        }


    }
}
