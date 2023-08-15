#include<iostream.h>
#include<conio.h>
int gcd(int x,int y)
{
int r;
if (y==0)
{
return (x);
}
else
{
r=x%y;
return (gcd(y,r));
}
}
void main()
{
int a,b,result;
clrscr();
cout<<"Enter two numners :";
cin>>a>>b;
result=gcd(a,b);
cout<<"G.C.D of "<<a<<" and "<<b<<" is="<<result;
getch();
}