/* 
------------------------------------------------------------------------------------------------
USERNAME: VIJOYALIYAN
DESCRIPTION: THIS IS A PROGRAM TO CHECK IF THE STRING IS PALINDROME OR NOT PALINDROME
DATE: 11/10/2021
------------------------------------------------------------------------------------------------
*/ 

my_string = 'MalayalaM'


my_string  = my_string .casefold()


reverse = reversed(my_string )


if list(my_string ) == list(rev_str):
   print("The string is a palindrome.")
else:
   print("The string is not a palindrome.")
