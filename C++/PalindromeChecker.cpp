/* 
------------------------------------------------------------------------------------------------
USERNAME: ABHILASHKPY
DESCRIPTION: THIS IS A PROGRAM TO CHECK IF THE NUMBER IS A PALINDROME
DATE: 1/10/2021
------------------------------------------------------------------------------------------------
*/


#include <iostream>
using namespace std;

int checkPal(int number)
{
  int x, rem, reverse=0;
  x = number;
   
  while( number!=0 )
  {
     rem = number % 10;
     reverse = reverse*10 + rem;
     number /= 10;
  }

  cout << " The reverse of the number is: " << reverse << endl;
  if ( reverse == x ) return 0;
  else return 1;
}


int main()
{
   int number;

  cout << "ENTER A NUMBER: ";
  cin >> number;
   
  if(checkPal(number) == 0)
      cout << " THE NUMBER IS A PALINDROME";
  else
      cout << " THE NUMBER IS NOT A PALINDROME.";

  return 0;
}
