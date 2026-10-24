#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int num1 = 25, num2 = 39;

    cout << "Number1 = 25  " << "Number2 = 39" << endl;
    cout << "Before swapping" << endl
         << num1 << setw(5) << num2 << endl;
    cout << "After swapping" << endl
         << num2 << setw(5) << num1 << endl;
}