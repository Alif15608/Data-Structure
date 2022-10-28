#include <iostream>
#include <queue>
using namespace std ;


int main()
{

    queue<char> myqueue;
    myqueue.push('T');
    myqueue.push('a');
    myqueue.push('s');
myqueue.push('n');
myqueue.push('i');
myqueue.push('a');
    while (!myqueue.empty()) {
        cout << ' ' << myqueue.front();
        myqueue.pop();
    }
}
