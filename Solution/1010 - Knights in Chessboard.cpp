#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,m,n,i=0;
    cin>>t;
    while(t--){
        cin>>m>>n;
        i++;
        if(m==1&&n==1){
      cout<<"Case"<<" "<<i<<":"<<" "<<m*n<<endl;
        }
        else if(m%2==0&&n%2==0){
            cout<<"Case"<<" "<<i<<":"<<" "<<0.5*m*n<<endl;
        }
        else if(m%2!=0&&n%2!=0){
                int p=(0.5*m*n);
        cout<<"Case"<<" "<<i<<":"<<" "<<p+1<<endl;

        }
    }
}
