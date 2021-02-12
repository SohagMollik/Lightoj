#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main ()
{
    int t,i=0;
    double r,square_sum,circle_sum,result,temp,pi;
    cin>>t;
    while(t--){
        cin>>r;
        i++;
        temp=2*r;
        square_sum=temp*temp;
        pi=acos(-1);
        circle_sum=pi*r*r;

        result=square_sum-circle_sum;

        cout<<"Case"<<" "<<i<<":"<<" "<<fixed<<setprecision(2)<<result<<endl;
    }
}

