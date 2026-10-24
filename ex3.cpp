#include <iostream>

using namespace std;

int main()
{
    int x = 5;
    cout << "answer= \n"
         << ++x + x-- + x;
    cout << x;
    return 0;
}