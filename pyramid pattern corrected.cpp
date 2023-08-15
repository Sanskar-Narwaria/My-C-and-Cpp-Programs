#include<iostream>
using namespace std;
int main()
{
	int i,j,k,m,n;
	k=4;
	for (i=1;i<=5;i++)
	{
		for(j=1;j<=k;j++)
		{
			cout<<" ";
		}
		for (m=1;m<=i;m++)
		{
			if(i%2==0)
			{
				cout<<"# ";
			}
			else{
				cout<<"* ";
			}
		}
		cout<<endl;
		k=k-1;
	}
	return 0;
}
