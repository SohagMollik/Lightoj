#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t,k=0;
    cin>>t;
    while(t--){
        long long int n,j=1,i,temp,sum=0,c=0;
        cin>>n;
        temp=n;
        k++;
        while(temp!=0){
            i=temp%2;
            sum+=(i*j);
            temp/=2;
            j=j*10;
            if(i==1)
            c++;
        }
    if(c%2==0)
        cout<<"Case"<<" "<<k<<":"<<" "<<"even"<<endl;
      else
        cout<<"Case"<<" "<<k<<":"<<" "<<"odd"<<endl;

    }
}
