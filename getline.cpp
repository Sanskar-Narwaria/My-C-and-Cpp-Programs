#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
{
	char x[10],y[10];
	cout<<"Enter Any String :";
	cin.getline(x,10);
	cout<<"\nEnter Another String :";
	cin.read(y,10);
	cout<<"\nConcatenated strings :";
	cout.write(x,strlen(x)).write("",0)write(y,stlen(y));
	return 0;
	
	
}
