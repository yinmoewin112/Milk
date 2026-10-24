#include <iostream>

using namespace std;

int main()
{
    int x = 5;
    cout << "answer= \n"
         << ++x + x-- + x;

    cout << "x value is " << x;
    return 0;
}