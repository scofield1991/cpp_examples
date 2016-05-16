#include <iostream>

using namespace std;

void swap_integers()
{
    int a, b;
    cout << "Enter an integer: ";
    cin >> a;
    cout << "\n Enter a larger integer: ";
    cin >> b;

    if(a > b)
    {
        cout << "Swapping the values \n";
        int temp;
        temp = b;
        b = a;
        a = temp;
        cout << "The smaler value is " << a;
        cout << "\nThe larger value is " << b;
    }

}
