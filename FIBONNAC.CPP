#include<iostream.h>
#include<conio.h>
void fseries(int p)
{
int fib;
static int f0=1,f1=1;
if (p==0)
{
cout<<endl<<"The series Ends";
}
else
{
fib=f0+f1;
f0=f1;
f1=fib;
cout<<endl<<fib;
fseries(p-1);
}
}
void main()
{
int limit,f0=1,f1=1;
clrscr();
cout<<"Enter the Limit of fibonnaci Series :";
cin>>limit;
if(limit>2)
{
cout<<f0<<endl<<f1;
fseries(limit-2);
}
else if(limit==2)
{
cout<<f0<<endl<<f1;
}
else if(limit==1){
cout<<f0;
}
else{
cout<<"Series not possible";

}
getch();
}
