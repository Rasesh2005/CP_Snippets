/* 
------------------------------------------------------------------------------------------------
USERNAME: Adarsh08X
DESCRIPTION: Program to convert decimal to binary
DATE: 1/10/2021
------------------------------------------------------------------------------------------------
*/
#include <bits/stdc++.h>

using namespace std;

//SNIPPET
string decimal_to_binary(int n)
{
   string ans;
   while(n>0){
       int current_bit = n&1;
       ans+=current_bit+'0';
       n>>=1;
   }
   reverse(ans.begin(),ans.end());
   return ans;
}
int main()
{
    //APPLICATION
    string binary = decimal_to_binary(24498757);
    cout << binary << endl;
    return 0;
}
