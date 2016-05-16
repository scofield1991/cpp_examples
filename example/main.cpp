#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include "add.h"
#include "bin/IntegerArray.h"

using namespace std;



struct movies_t
{
    string title;
    int year;
};

bool isEqual(int x, int y)
{
    return (x == y);
}

int main()
{
    /*int my_array[20];
    int second_array[20];
    int length = 6;
    input_array( my_array, length);
    display_array(my_array, length);
    copy_array(second_array, my_array, length);
    display_array(second_array, length);
    cout << "std= "<< standard_deviation(my_array, length);*/
    Rectangle rect, rect_b;
    rect.set_values(3,4);
    rect_b.set_values(30,4);
    cout << "area1: " << rect.area();
    cout << "area2: " << rect_b.area();

    return 0;
}
