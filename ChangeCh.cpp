#include <iostream>
#include <sstream>
using namespace std;

void swap(int*, int*);
void ReplaceAll(string* input, char what, char with);

int main()
{
    int one = 137;
    int two = 42;
    string anything = "Just to test";
    char t = 't';
    char w = 'w';

    cout << anything << endl;

    ReplaceAll(&anything, t, w);

    cout << anything << endl;

    return 0;
}

void swap(int* one, int* two)
{
    int temp = *one;
    *one = *two;
    *two = temp;
}

void ReplaceAll(string* input, char what, char with)
{
    for(int index = 0; index < input -> length(); ++index)
    {
        if(input -> at(index) == what)
           input -> at(index) = with;
    }
}




