#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t,i=0;
    cin>>t;
    while(t--){
        int r1,c1,r2,c2;
        cin>>r1>>c1>>r2>>c2;
        i++;
        r1=abs(r1-r2);
        c1=abs(c1-c2);
        if(r1==c1){
            cout<<"Case"<<" "<<i<<":"<<" "<<1<<endl;
            }
            else{
                if(r1%2==c1%2)
            cout<<"Case"<<" "<<i<<":"<<" "<<2<<endl;


            else
            cout<<"Case"<<" "<<i<<":"<<" "<<"impossible"<<endl;

            }
        }

    }

