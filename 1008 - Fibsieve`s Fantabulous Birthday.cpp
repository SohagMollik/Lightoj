#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long int n,row,col,t;
    cin>>t;
    while(t--){
        cin>>n;
        int i=0;
        i++;
        long long int sq=ceil(sqrt(n));
        long long int r=sq*sq-n;
        if(r<sq){
            col=r+1;
            row=sq;
        }
        else{
            col=2*sq-r-1;
            row=sq;
        }
        cout<<"Case"<<" "<<i<<":"<<" "<<col<<" "<<row<<endl;
    }

}
