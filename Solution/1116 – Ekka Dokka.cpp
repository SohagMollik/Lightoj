#include<bits/stdc++.h>
#include<math.h>
#define ll long long
using namespace std;
int main()
{
    ll t,i=0;
    cin>>t;
    while(t--){
        ll w,y;
        cin>>w;
        i++;
        for(int x=1;x<w;x++){
                y=pow(2,x);
            if(w%y==0&&(w/y)%2!=0){
        cout<<"Case"<<" "<<i<<":"<<" "<<w/y<<" "<<y<<endl;
                break;

            }

        else if(w%y!=0&&(w/y)%2!=0){
            cout<<"Case"<<" "<<i<<":"<<" "<<"Impossible"<<endl;
            break;

        }
        }
    }
}
