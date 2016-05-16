#include <iostream>
#include <cstring>
#include <assert.h>

using namespace std;

char* truncateString(char* cString, int index);
char* StringDuplicate(char* cString);
int CountFrequency1(char* cString, char chr);
int CountFrequency2(char* cString, char chr);
bool StrCaseEqual(char* cStr1, char* cStr2);
char* CreateRepetitiveString(char chr, int length);

int main()
{
    char* my_str = "Hello world!";
    cout << CreateRepetitiveString('a', 5) << endl;
    if(StrCaseEqual(my_str, "hello worlD!"))
        cout << "equal!" << endl;
    else
        cout << "not equal!" << endl;
    int num_1, num_2;
    cout << my_str << endl;
    num_1 = CountFrequency1(my_str, 'o');
    cout << num_1 << endl;
    num_2 = CountFrequency2(my_str, 'l');
    cout << num_2 << endl;
    my_str = truncateString(my_str, 13);
    cout << my_str << endl;


    return 0;
}


char* truncateString(char* cString, int index)
{
    int strLength = strlen(cString);
    cout << "strLength " << strLength  << endl;
    assert(index <= strLength);
    char* cStrCopy = new char[strlen(cString) + 1];
    strcpy(cStrCopy, cString);
    cStrCopy[index] = '\0';

    return cStrCopy;
}

char* StringDuplicate(char* cString)
{
    char* cStrCopy = new char[strlen(cString) + 1];
    strcpy(cStrCopy, cString);

    return cStrCopy;
}

int CountFrequency1(char* cString, char chr)
{
    int length = strlen(cString);
    int counter = 0;
    for(int i = 0; i < length; i++)
    {
        if (cString[i] == chr)
            counter++;
    }
    return counter;
}

int CountFrequency2(char* cString, char chr)
{
    int counter = 0;
    for(char* currLoc = cString; *currLoc != '\0'; ++currLoc)
    {
        if(*currLoc == chr)
            counter++;
    }
    return counter;
}

bool StrCaseEqual(char* cStr1, char* cStr2)
{
    char* currLoc = cStr1;
    int i = 0;
    for( ; *currLoc != '\0'; ++currLoc, ++i)
    {

        if (toupper(*currLoc) != toupper(cStr2[i]))
            return false;
    }

    if (toupper(*currLoc) != toupper(cStr2[i]))
        return false;
    return true;
}

char* CreateRepetitiveString(char chr, int length)
{
    char* myStr = new char[length+1];
    memset(myStr, chr, length);

    return myStr;
}
