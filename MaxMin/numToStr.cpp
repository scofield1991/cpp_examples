#include <sstream>
#include <string>
using namespace std;

template <typename T>
string conv(const T& num)
{
    stringstream myStream;
    string myString;
    myStream << num;
    myString = myStream.str();

    return myString;

}
