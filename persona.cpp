#include <iostream>
#include <string.h>
using namespace std;


class Persona
{ protected:
            
   char* name;              // èìÿ
   int age;                  // âîçðàñò
   int state;                 // ïîë

public:     
Persona();                               //êîíñòðóêòîð áåç ïàðàìåòðîâ
Persona(char* name,int age,int state);   // êîíñòðóêòîð ç ïàðàìåòðàìè
Persona(const Persona&);                // êîíñòðóêòîð êîïûþâàííÿ

~Persona();
char * Getname() ;
int Getage() ;
int Getstate() const;

void Setname(char*);
void Setage(int);
void Setstate(int);
void Set(char*,int,int);
void Show(); 
};
Persona::Persona()
{ 
name = new char[20];
name[0]=0;
age=0;
state=0;
cout <<"konstructor bez parametriv" <<endl;
}
 void Persona::Show()
{ 
 cout << "name: " << name <<"age: " << age << "state: " << state << endl; 
} 

Persona::Persona(char* _name, int _age, int _state)
 { 
  int n=strlen(_name);
 this->name=new char[n+1];
 strncpy(name, _name,n);
 name[n]=0;
 
 this->age=_age;
 this->state=_state;
 cout <<" konstructor z parametrami"<< endl;
 }  
 void Persona::Show()
{ 
 cout << "name: " << name <<"age: " << age << "state: " << state << endl;   
}
Persona::Persona(const Persona &x)
{
int n=strlen(x.name);
this->name=new char[n+1];
strncpy(name,x.name,n);
name[n]=0;
this->age=x.age;

this->state=x.state;
}
void Persona::setname(char*name)
{
if (name) delete[]name;
int n=strlen(_name);
name=new char[n+1];
strncpy(name,_name,n);
name[n]=0;
}

char*getname()
{
char*&=new char[strlen(name)+1];
strcpy(&,name,strlen(name));
&=[strlen(name)]=0;
return &;
}

void Persona::setage(char*age)
{
if (age) delete[]age;
int n=strlen(_age);
age=new char[n+1];
strncpy(age,_age,n);
age[n]=0;
}

char*getage()
{
// return age
char*&=new char[strlen(age)+1];
strcpy(&,age,strlen(age));
&=[strlen(age)]=0;
return &;
}
 
void Persona::setstate(char*state)
{
if (state) delete[]sate;
int n=strlen(_state);
state=new char[n+1];
strncpy(state,_state,n);
state[n]=0;
}
 
char*getstate()
{
// return state
char*&=new char[strlen(state)+1];
strcpy(&,state,strlen(state));
&=[strlen(state)]=0;
return &;
}





int main()
{
  Persona p1;
  p1.show();
  Persona p2("olya",4,1);
  p2.show();
  
persona*p=new persona;
persona(vova,12,1);
p->show();
    system("PAUSE");
  return EXIT_SUCCESS;;
}
