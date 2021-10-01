'''
USERNAME: atulnarayan16
DESCRIPTION: THIS PROGRAM TO COUNT NUMBER OF EVEN AND ODD NUMBERS
DATE: 1/10/2021
'''
def count(n):
     
    ec = 0
    oc = 0
    while (n > 0):
        r = n % 10
        if (r % 2 == 0):
            ec = ec + 1
        else:
            oc = oc +  1
             
        n = int(n / 10)
     
    print( "Even count : " , ec)
    print("Odd count : " , oc)
    if (ec % 2 == 0 and oc % 2 != 0):
        return 1
    else:
        return 0
 

n = int(input())
t = count(n)
 
