#ifndef INTEGERARRAY_H_INCLUDED
#define INTEGERARRAY_H_INCLUDED

void input_array(int arr[], int length);
void display_array(int arr[], int length);
void copy_array(int arr1[], int arr2[], int length);
double standard_deviation(int arr[], int length);

class Rectangle
{
    int width, height;
  public:
    void set_values(int, int);
    int area(){return width*height;}
};

#endif // INTEGERARRAY_H_INCLUDED
