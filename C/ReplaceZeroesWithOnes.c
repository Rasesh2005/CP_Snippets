/* 
------------------------------------------------------------------------------------------------
USERNAME: KARTIKPMADHU
DESCRIPTION: THIS IS A PROGRAM TO REPLACE ALL ZEROES WITH ONES IN A GIVEN INTEGER
DATE: 10/10/2021
------------------------------------------------------------------------------------------------
*/

#include<stdio.h>

int ReplaceNumber(long int number)
{

if (number == 0)
return 0;

int digit = number % 10;
if (digit == 0)
digit = 1;

return ReplaceNumber(number/10) * 10 + digit;
}

int Convert(long int number)
{
if (number == 0)
return 1;
else
return ReplaceNumber(number);
}

int main()
{
long int number;
printf(“\nEnter the number : “);
scanf(“%d”, &number);
printf(“\nNew Number : %dn”, Convert(number));
return 0;
}
