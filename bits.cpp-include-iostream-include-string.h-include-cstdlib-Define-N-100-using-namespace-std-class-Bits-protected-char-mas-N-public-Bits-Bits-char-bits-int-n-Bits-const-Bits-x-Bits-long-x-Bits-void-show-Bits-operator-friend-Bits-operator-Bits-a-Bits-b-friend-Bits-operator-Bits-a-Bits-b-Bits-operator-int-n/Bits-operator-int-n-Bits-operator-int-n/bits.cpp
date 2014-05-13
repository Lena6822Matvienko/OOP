#include <iostream>
#include <string.h>
#include <cstdlib>

#Define N 100

using namespace std;

class Bits
 {
protected:
char mas[N];

public:
Bits();
Bits(char*bits, int n);
Bits(const Bits & x);
Bits(long x);
~Bits();

void show();

Bits operator ~ ();
friend Bits operator & (Bits & a, Bits & b);
friend Bits operator | (Bits & a, Bits & b);
Bits operator < (int n);  //не циклічний
Bits operator > (int n);
Bits operator << (int n);  //циклічний
Bits operator >> (int n);
 };
