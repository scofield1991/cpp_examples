#include <iostream>
using namespace std;

int doubleNumber(int x)
{
    return 2 * x;
}

int main()
{
    int a;

    cout << "Enter te number: ";
    cin >> a;
    cout << "Answer: " << doubleNumber(a) << endl;
}
