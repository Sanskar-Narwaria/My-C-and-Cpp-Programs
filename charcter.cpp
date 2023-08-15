#include<iostream>
using namespace std;
int hex(void){
	int num,temp,i=1,j,rem;
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
	cout<<"Hexadecimal of"<<num<<"is :";
	for (j=1;j>0;j--)
	{
		cout<<hex[j];
	}
	return (0);
}
int main(){
	cout<<"DECIMAL TO HEXADECIMAL CONVERSION\n";
	hex();
	return 0;
}
