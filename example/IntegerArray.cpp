#include <iostream>
#include <string>
#include <sstream>
#include <math.h>
using namespace std;

void input_array(int arr[], int length)
{
    int treshold = 0;
    string user_num;


    while(treshold < length)
    {
       cout << "Enter a number: "<< endl;
       getline(cin, user_num);

       stringstream converter;
       converter << user_num;

       int num;
       converter >> num;

       if (!converter.fail())
       {
            arr[treshold] = num;
            //cout << arr[treshold];
            ++treshold;
            //cout << arr[treshold];
       }
       else
        cout << "Please enter a valid number!\n" ;
    }
}

void display_array(int arr[], int length)
{
    for(int counter=0; counter<length; ++counter)
    {
        cout << arr[counter] << "\n";
    }
}

void copy_array(int arr1[], int arr2[], int length)
{
    for(int counter=0; counter<length; ++counter)
    {
        arr1[counter] = arr2[counter];
    }
}

double standard_deviation(int arr[], int length)
{
    int total(0);
    for(int counter=0; counter<length; ++counter)
    {
        total += arr[counter];
    }
    double average = double(total) / length;

    double difference(0);
    for(int counter=0; counter<length; ++counter)
    {
        difference += pow((arr[counter] - average), 2);
    }
    double deviation;
    deviation = difference / length;

    double variance;
    variance = sqrt(deviation);

    return variance;
}


