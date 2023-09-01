/*
****************************************************************
    __author__ : Sohag Mollik

 ******** Pari na kicu ********

****************************************************************
*/

#include <bits/stdc++.h>
#define ll   long long int
#define pb   push_back
#define ull  unsigned long long
#define f    first
#define s    second
#define mod  1000000007
#define nn   "\n"
#define yes  printf("YES\n")
#define no   printf("NO\n")
using namespace std;

vector<int>arr;
vector<int>tree;

void init(int node, int b, int e)
{

    if(b==e){
        tree[node] = arr[b];
        return ;
    }

    int left = 2*node;
    int right = 2*node + 1;
    int mid = (b+e) / 2;
    init(left,b,mid);
    init(right,mid+1,e);

    tree[node] = min(tree[left], tree[right]);
}

int solve(int node, int b, int e, int i, int j)
{
    if(i>e || j<b){
        return INT_MAX;
    }

    if(b>=i && e<=j){
        return tree[node];
    }

    int left = 2*node;
    int right = 2*node +1;
    int mid = (b+e) / 2;
    int p1 = solve(left, b, mid, i, j);
    int p2 = solve(right, mid + 1, e, i, j);

    return min(p1,p2);

}


int main()
{

    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int t,test=1;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        arr.assign(n+2,0);
        tree.assign((4*n)+2,0);

        for(int i=1;i<=n;++i){
            cin>>arr[i];
        }

        init(1,1,n);

        cout<<"Case "<<test<<":\n";
        while(q--){
         int x,y;
         cin>>x>>y;
         cout<<solve(1, 1, n, x, y)<<nn;
        }

        test++;

    }


    return 0;
}

