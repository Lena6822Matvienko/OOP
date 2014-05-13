#include <cstdlib>
#include <iostream>

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
                
int main(int argc, char *argv[])
{ complex a(1,1);
 complex b(0,0);
 (-a).show();

    system("PAUSE");
    return EXIT_SUCCESS;
}
