#include <iostream>
#include <string>

using namespace std;

int minimum_from(string a, int position, int length);

void selection_sort(string& a)
{
    int length = a.length();
    for(int count = 0; count < length - 1; count++)
    {
        swap(a[count], a[minimum_from(a, count, length)]);
    }


}

int minimum_from(string a, int position, int length)
{
    int min_index = position;

    for(int count = position + 1; count < length; count++)
        if(static_cast<int>(a[count]) < a[min_index] && static_cast<int>(a[count] > 0))
            min_index = count;

    return min_index;
}
