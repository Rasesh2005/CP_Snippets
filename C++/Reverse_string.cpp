/* 
------------------------------------------------------------------------------------------------
USERNAME: VaibhavMogha
DESCRIPTION: THIS PROGRAM REVERSE A STRING USING LOOP.
DATE: 2/10/2021
------------------------------------------------------------------------------------------------
*/
#include<iostream>
#include<string.h>
using namespace std;
int Sreverse (char rev[50])
{
    char temp;
    int i, j;
    j = strlen(rev) - 1;
    for (i = 0; i < j; i++,j--)
    {
        temp = rev[i];
        rev[i] = rev[j];
        rev[j] = temp;
    }
    cout << "\nReverse string : " << rev;
    return 0;
}
int main()
{
    char str[50];
    cout << "Enter a string : ";
    gets(str);
    Sreverse(str);
    return 0;
}