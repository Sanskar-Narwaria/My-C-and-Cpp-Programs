#include<iostream>
using namespace std;
class B;
class A{
	private:
		int x;
	public:
		void aset()
		{
			x=2;
		}
		void show(B);
};
class B{
	private:
		int y;
	public:
		void bset()
		{
			y=8;
		}
		friend void A::show(B b);
};
void A::show(B b)
{
	cout<<"\nVAlue of x="<<x;
	cout<<"\nValue of y="<<b.y;
}


int main()
{
	A a;
	B b;
	a.aset();
	b.bset();
	a.show(b);
  
}
