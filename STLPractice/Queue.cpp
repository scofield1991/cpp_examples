#include <iostream>
#include <queue>

using namespace std;

const int NUM_INTS = 10;
void queue_ex()
{
    queue<int> myQueue;

    for(int i = 0; i < NUM_INTS; i++)
    {
        myQueue.push(i);
    }

    cout << "The size is " << myQueue.size() << endl;
    cout << "The first elememt is " << myQueue.front() << endl;
    cout << "The last element is " << myQueue.back() << endl;

    while(!myQueue.empty())
    {
        cout << myQueue.front() << " ";
        myQueue.pop();
    }

    cout << endl;
}
