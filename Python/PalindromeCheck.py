/* 
------------------------------------------------------------------------------------------------
USERNAME: VIJOYALIYAN
DESCRIPTION: THIS IS A PROGRAM TO CHECK IF THE STRING IS PALINDROME OR NOT PALINDROME
DATE: 11/10/2021
------------------------------------------------------------------------------------------------
*/ 

def isPalindrome(s):
    return s == s[::-1]

my_string = 'MalayalaM'
reverse = isPalindrome(my_string)

if reverse:
    print("The string is a palindrome.")
else:
    print("The string is not a palindrome.")
     
