#include <string>
#include <iostream>
using namespace std;

void no_repetitions(string& a)
{
    string no_rep;
    int lenght = a.length();

    for(int index = 0; index < lenght; ++index)
    {
        if(no_rep.find(a[index]) == string::npos)
            no_rep += a[index];
    }
    cout << no_rep;
}
