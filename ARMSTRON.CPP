#include<iostream.h>
#include<conio.h>
void main()
{
int sum=0,i,n,r,m,s;
clrscr();
cout<<"enter upto which numner:";
cin>>s;
i=1;
while(i<=s)
{
n=m=i;
while(n!=0)
{
r=n%10;
sum=sum+r*r*r;
n=n/10;
}
if (sum==m)
{
cout<<"\narmstrong no is:"<<sum;
}
sum=0;
i++;
}

getch();
}