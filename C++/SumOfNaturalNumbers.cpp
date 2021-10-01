/* 
------------------------------------------------------------------------------------------------
USERNAME: Architgupta001
DESCRIPTION: THIS PROGRAM SUM THE NATURAL NUMBERS USING LOOP
DATE: 1/10/2021
------------------------------------------------------------------------------------------------
*/
#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    cout << "Enter a positive integer: ";
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        sum += i;
    }

    cout << "Sum = " << sum;
    return 0;
}
