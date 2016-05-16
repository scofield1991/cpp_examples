#include <string>
#include <iostream>
#include <sstream>
#include <fstream>
using namespace std;

int add(int x, int y)
{
    return x + y;
}

string GetLine()
{
    string result;
    getline(cin,result);
    return result;
}

int GetInteger()
{
    while(true)
    {
        stringstream converter;
        converter << GetLine();

        int result;
        converter >> result;
        if(!converter.fail())
        {
            char remaining;
            converter >> remaining;
            if(converter.fail())
                return result;
            else
                cout << "Unexpected character: " << remaining << endl;
        }
        else
            cout << "Please enter an integer." << endl;

        cout << "Retry: ";

    }
}

int getNums()
{
    ifstream input("/home/oleksandr/data.txt");
    if(!input.is_open())
    {
        cerr << "Cannot open file!" << endl;
        return 0;
    }

    while(true)
    {
        int myInt;
        input >> myInt;


        if(input.eof())
            break;

        if(!input.fail())
        {

            cout << myInt << endl;
        }
        else
        {
            input.clear();
            string word;
            input >> word;
            //cout << word << " ";
        }
    }

    return 0;
}
