/* 
------------------------------------------------------------------------------------------------
USERNAME: ABHILASHKPY
DESCRIPTION: THIS IS A PROGRAM TO CHECK IF THE NUMBER IS A PALINDROME
DATE: 1/10/2021
------------------------------------------------------------------------------------------------
*/


#include <iostream>
using namespace std;

int main()
{
   int x, number, digit, reverse = 0;

  cout << "ENTER A NUMBER: ";
  cin >> numbe;

  x = number;

  do
  {
     digit = number % 10;
     reverse = (reverse * 10) + digit;
     number = number / 10;
 } while (number != 0);
  
  
cout << " The reverse of the number is: " << reverse << endl;
  if (x == reverse)
      cout << " THE NUMBER IS A PALINDROME";
  else
      cout << " THE NUMBER IS NOT A PALINDROME.";

  return 0;
}
