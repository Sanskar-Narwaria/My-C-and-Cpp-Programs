#include<iostream>
#include<string.h>
using namespace std;
int hexa(void){
	int num,temp,i=0,j,rem,m,n;
	char hex[20];
	cout<<"Enter a DEcimal no =";
	cin>>num;
	temp=num;
	while(temp!=0)
	{
		rem=temp%16;
		if (rem<10){
			hex[i++]=rem+48; //decimal 48 is equal to 0 Ascii
		}
		else{
			hex[i++]=rem+55; //decimal 65 is equal to A Ascii
		}
		temp=temp/16; 
	}
	m=strlen(hex);
	n=m-1;
	cout<<"Hexadecimal of"<<num<<"is :";
	for (j=0;j<m;j++)
	{
		cout<<hex[n];
		n--;
	}
	
	return (0);
}
int octal(void){
	int i=0,num,temp,j,rem,m,n;
	char oct[20];
	cout<<"Enter a DEcimal no. =";
	cin>>num;
	temp=num;
	while (temp!=0){
		rem=temp%8;
		oct[i++]=rem+48;
		temp=temp/8;
		
	}
	m=strlen(oct);
	n=m-1;
	cout<<"OCTAL of"<<num<<"is :";
	for(j=0;j<m;j++)
	{
		cout<<oct[n];
		n--;
	}
	return 0;
		}
	

int main(){
	cout<<"DECIMAL TO HEXADECIMAL CONVERSION\n";
	hexa();
	cout<<"\nDECIMAL TO OCTAL CONVERSION\n";
	octal();
	return 0;
}
