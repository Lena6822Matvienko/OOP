#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;
class complex
{
      protected:
                double re;
                double im;
      public: 
      complex(double RE, double IM);
      ~complex();
      complex operator-();
      complex operator+(complex &b);
      double module();
      void show();
 
      
      complex operator=(complex &b)
      {
              re=b.re;
              im=b.im;
      }
 }; 
      
      complex::complex(double RE, double IM)
      {
         re=RE;
         im=IM;
      }
  complex::~complex()
  {               
  }
  complex complex::operator-()
  { 
          complex x(-re, -im);
           return x;
   }
   void complex:: show()
   {
     if (im>0)
     cout <<re<<"+"<<im<<"*i";
     else
     cout<<re<<im<<"*i";
   }
        complex complex::operator+ (complex &b)
   {
	  complex x(re, im);

	  x.re = re + b.re;
	  x.im = im + b.im;
    
	  return x;
   }
       
double complex::module()
{   double i= sqrt (re * re + im * im);
    return i;
}

            
int main(int argc, char *argv[])
{ complex a(8,1);
 complex b(5,1);
 cout<<endl;
 (-a).show();
 cout<<endl;
 (a).show();
 cout<<endl;
 cout << "Module of i1:" << a.module() << '\n';
 cout << "Module of i2:" << b.module() << '\n';

    system("PAUSE");
    return EXIT_SUCCESS;
}
