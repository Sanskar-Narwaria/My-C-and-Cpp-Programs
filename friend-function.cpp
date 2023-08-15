#include<iostream>
using namespace std;
class PQR;
class XYZ;
class ABC
{
	private:
		int a=2;
	public:
		void display()
		{
			cout<<"\nValue of A="<<a;
		}
		friend void show(ABC B,PQR Q,XYZ Y);
};
class PQR{
	private:
		int p=4;
	public:
		void display()
		{
			cout<<"\nValue of P="<<p;
		}
		friend void show(ABC B,PQR Q,XYZ Y);
};
class XYZ{
	private:
		int x=6;
	public:
		void display()
		{
			cout<<"\nValue of X="<<x;
		}
		friend void show(ABC B,PQR Q,XYZ Y);
};
void show (ABC B,PQR Q,XYZ Y)
{
	cout<<"\nVAlue of Element of class ABC ="<<B.a;
	cout<<"\nVAlue of Element of class PQR="<<Q.p;
	cout<<"\nVAlue of Element of class XYZ ="<<Y.x;
}
int main()
{
	ABC A;
	PQR P;
	XYZ X;
	A.display();
	P.display();
	X.display();
	show(A,P,X);
}
