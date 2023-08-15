#include<iostream>
using namespace std;
void fact(void){
		    int i,num,fact=1;
			cout<<"\nEnter the number :";
			cin>>num;
			for (i=num;i>=1;i--)
			{
				fact =fact*i;
			}
			cout<<endl<<"Factorial of "<<num<<" is :"<<fact;
}
void fib(void)
{
			int a=0,b=1,c=0;
			int i,n;
			cout<<"\nEnter the number of terms :";
			cin>>n;
			cout<<"\nFibonacci Series-\n";
			for (i=1;i<=n;i++)
			{
				cout<<a<<" ";
				c=a+b;
				a=b;
				b=c;
			}
}
void pall(void)
{
			int num;
			int a,b=0;
			cout<<"\nEnter the number:";
			cin>>num;
			a=num;
			while(a!=0)
			{
				b=(b*10)+(a%10);
				a=a/10;
			}
			if (num==b){cout<<"\nThe given no is palindrome";}
			else { cout<<"\nNot a palindrome";
			}
}
int main()
{
	int ch;
	cout<<"\nChoices :\n1.Factorial of a number"<<endl;
	cout<<"2.Fibonacci Series"<<endl;
	cout<<"3.Check the entered no is Palindrome or not"<<endl;
	cout<<"Enter your choice :";
	cin>>ch;
	switch (ch){
		case 1:
			fact();
			break;
		case 2:
			fib();
			break;
		case 3:
			pall();

			break;
			deafult:
				cout<<"\nWrong Choice";
			
			}
		return 0;
	}


