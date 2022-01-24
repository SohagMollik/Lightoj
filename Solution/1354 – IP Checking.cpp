#include<bits/stdc++.h>
using namespace std;
int binary(long long int bin){
  int rem,sum=0,p=0;
  while(bin!=0){
    rem=bin%10;
    bin/=10;
    sum+=rem*pow(2,p++);
  }
    return sum;

}
int main()
{
    int t,i=0;
    cin>>t;
    while(t--){
        int d[4];
        long long int b[4];
        i++;
        scanf("%d.%d.%d.%d",&d[0],&d[1],&d[2],&d[3]);
        scanf("%ld.%ld.%ld.%ld",&b[0],&b[1],&b[2],&b[3]);
        b[0]=binary(b[0]);
        b[1]=binary(b[1]);
        b[2]=binary(b[2]);
        b[3]=binary(b[3]);
        if(d[0]==b[0]&&d[1]==b[1]&&d[2]==b[2]&&d[3]==b[3])
            cout<<"Case"<<" "<<i<<":"<<" "<<"Yes"<<endl;
        else
            cout<<"Case"<<" "<<i<<":"<<" "<<"No"<<endl;

    }
}
