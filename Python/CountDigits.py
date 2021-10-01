"""
------------------------------------------------------------------------------------------------
USERNAME: AJgthb2002
DESCRIPTION: THIS PROGRAM RETURNS THE COUNT OF DIGITS IN A GIVEN NUMBER
DATE: 1/10/2021
------------------------------------------------------------------------------------------------
"""

def count_digits(num):
    num_string= str(num)
    digit_count= len(num_string)
    return digit_count

n= 1399023
print(count_digits(n))
