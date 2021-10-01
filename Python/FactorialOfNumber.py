'''
USERNAME: atulnarayan16
DESCRIPTION: THIS PROGRAM TO CALCULATE FACTORIAL OF A NUMBER
DATE: 1/10/2021
'''
def factorial(num):
    if num == 0:
        return 1
    else:
        return num * factorial(num-1)
num=int(input("Enter the number : "))
print(factorial(num))
