'''
USERNAME: atulnarayan16
DESCRIPTION: THIS PROGRAM TO COUNT NUMBER OF EVEN AND ODD NUMBERS
DATE: 1/10/2021
'''
ec= 0
oc =0
arr = list(map(int, input("Enter Numbers :").split()))
  

for _ in arr:
      
    
    if _ % 2 == 0:
        ec += 1
  
    else:
        oc += 1
          
print("Even numbers in the list: ", ec)
print("Odd numbers in the list: ", oc)
