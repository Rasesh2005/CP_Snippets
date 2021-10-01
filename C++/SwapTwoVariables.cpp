/* 
------------------------------------------------------------------------------------------------
USERNAME: VISHAAAL
DESCRIPTION: THIS PROGRAM WILL PERFORM SWAPPING OF 2 VARIABLES USING 3RD VARIABLE
DATE: 1/10/2021
------------------------------------------------------------------------------------------------
*/

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter value of a: ";
    cin >> a;
    cout << "Enter value of b: ";
    cin >> b;
    cout << "Before Swapping: a: " << a << " b: " << b << endl;
    // start: swapping logic
    c = a;
    a = b;
    b = c;
    // end: swapping logic
    cout << "After Swapping: a: " << a << " b: " << b << endl;
    return 0;
}