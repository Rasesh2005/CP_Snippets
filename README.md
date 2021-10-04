# CP_Snippets
A One Stop Place to find many useful Snippets for competetive programming

# Contribution Procedure
* Raise an issue about the snippet you want to make in the following format:
    File Name: YourFileName.xx (PascalCase name is compulsory, Example)
    Description: 2 to 5 lines of what the snippets performs
* You will be assigned the issue, Then You can create a Pull Request Whose code follows the conduct belo
* your Snippet should be short and formatted, use minimal boilerplate, and use the format giver below
* Don't Forget to include your username, Description of code and Date of creation of your code

Example 
Filename: PrimeCheck.cpp
Snippet:
```Cpp
/* 
------------------------------------------------------------------------------------------------
USERNAME: RASESH2005
DESCRIPTION: THIS PROGRAM CHECKS IF A NUMBER IS PRIME OR NOT
DATE: 1/10/2021
------------------------------------------------------------------------------------------------
*/
#include <bits/stdc++.h>

using namespace std;

//SNIPPET
bool isPrime(int n)
{
    for (int i = 2; i <= int(sqrt(n) + 1); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main()
{
    //APPLICATION
    bool result = isPrime(24498757);
    cout << result << endl;
    cout << (result ? "Prime" : "Not A Prime") << endl;
    return 0;
}
```
* Drop the file in the respective language folder, If your language folder is absent make a new folder with your language name
* Make a PR Addressing the issue you made  That was assigned to you.
* You will receive a response soon

## Thank You for contributing. Happy Hacking.