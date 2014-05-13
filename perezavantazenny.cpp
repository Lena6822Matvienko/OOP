#include <iostream>
#include <stdio.h>
#include <string.h>


using namespace std;

class complex
{
    protected:
	double x; 
	double re;
	double im;
	public:
	complex(double RE, double IM);
	complex();
	complex operator-();
	complex operator=(complex &b)
	{
		re=b.re;
		im=b.im;
	}
	void show();
};
complex::complex()
{
	re=0;
	im=0;
}
complex::complex(double RE, double IM)
{
	re=RE;
	im=IM;
}

complex complex::operator-()
{
	complex x(-re, -im);
	return x;
}
void complex::show()
{
	if(im>=0)
	cout << re << "+" << im << "*i"<< endl;
	else
	cout << re<< im << "*i" << endl;
}

int main()
{
	complex a(1,1);
	complex b; // b=-a
	(-a).show();//b.show()

}
