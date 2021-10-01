/* 
------------------------------------------------------------------------------------------------
USERNAME: chirantan-basu01
DESCRIPTION: THIS PROGRAM TO CONVERT FAHRENHEIT SCALE TO CELSIUS SCALE 
DATE: 1/10/2021
------------------------------------------------------------------------------------------------
*/



#include <bits/stdc++.h>

using namespace std;
 
//SNIPPET
float FahrenheitToCelsius(float n)
{
    return (n - 32.0) * 5.0 / 9.0;
}
 

int main()
{
    //APPLICATION
    float n = 50;
    cout << FahrenheitToCelsius(n);
    return 0;
}
