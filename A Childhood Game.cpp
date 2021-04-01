#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,i=0;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s,s1="Alice";
        cin>>s;
        i++;
        if(s==s1)
        {

            if(n%3==1)cout<<"Case "<<i<<": "<<"Bob\n";
            else cout<<"Case "<<i<<": "<<"Alice\n";
        }
        else {
            if(n%3!=0)cout<<"Case "<<i<<": "<<"Bob\n";
            else cout<<"Case "<<i<<": "<<"Alice\n";
        }

    }
    return 0;
}
