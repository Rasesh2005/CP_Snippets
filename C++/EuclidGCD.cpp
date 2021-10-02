/* 
------------------------------------------------------------------------------------------------
USERNAME: Adarsh08X
DESCRIPTION: Euclids GCD
DATE: 2/10/2021
------------------------------------------------------------------------------------------------
*/
#include <bits/stdc++.h>

using namespace std;

//SNIPPET
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
    
}
int main()
{
    //APPLICATION
    int a = 21, b = 70;
    cout<<"Gcd of the given numbers is "<<gcd(a,b);
    return 0;
}
