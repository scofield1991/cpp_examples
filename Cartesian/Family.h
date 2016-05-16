#ifndef FAMILY_H_INCLUDED
#define FAMILY_H_INCLUDED

#include <iostream>
using namespace std;

class Mother
{
public:
    Mother(){ cout << "Mother No params\n"; }
    Mother(int a) { cout << "Mother int param\n";}
};

class Dauther: public Mother
{
public:
    Dauther() { cout << "Douther no params\n";}
};

class Son: public Mother
{
public:
    Son(int a): Mother(a)
    {
        cout << "son int param\n";
    }
};
#endif // FAMILY_H_INCLUDED
