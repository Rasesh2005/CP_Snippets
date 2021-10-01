"""
------------------------------------------------------------------------------------------------
USERNAME: AJgthb2002
DESCRIPTION: THIS PROGRAM RETURNS THE INDEX OF AN ELEMENT IN AN ARRAY USING BINARY SEARCH
DATE: 1/10/2021
------------------------------------------------------------------------------------------------
"""
def binary_search(array, l,h,target):
    if h>=l:
        mid= (h+l)//2
        if array[mid]==target:
            return mid
        elif array[mid]>target:
            return binary_search(array,l,mid-1,target)
        else:
            return binary_search(array,mid+1,h,target)
    else:
        return -1
    
arr=[2,3,6,8,9,10]        
print(binary_search(arr,0,len(arr)-1,9))          
  
