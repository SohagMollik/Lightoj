#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i=0;
    cin>>t;
  while(t--)
  {
    double ax,ay,bx,by,cx,cy,dx,dy,mx,my,d1,ab,h;
    double area=0;
    i++;
      cin>>ax>>ay>>bx>>by>>cx>>cy;
      mx=(ax+cx)/2;
      my=(ay+cy)/2;
      dx=(2*mx)-bx;
      dy=(2*my)-by;
      d1=sqrt(((ax-cx)*(ax-cx))+((ay-cy)*(ay-cy)));
      ab=sqrt(((ax-bx)*(ax-bx))+((ay-by)*(ay-by)));
      h=sqrt((d1*d1)-(ab*ab));
      area=(int)(ab*h);
      cout<<"Case"<<" "<<i<<":"<<" "<<dx<<" "<<dy<<" "<<area<<endl;

  }
}
