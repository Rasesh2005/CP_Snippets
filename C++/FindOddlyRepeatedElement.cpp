/* 
------------------------------------------------------------------------------------------------
USERNAME: cod3luv3r
DESCRIPTION: PROGRAM TO FIND THE ELEMENT REPEATEDLY ODD NUMBER OF TIMES IN AN ARRAY IN C++. IT TAKES O(N)TIME COMPLEXITY AND A CONSTANT SPACE COMPLEXITY. THE ALGORITHM USES BIT-WISE OPERATIONS.
DATE: 16/10/2021
------------------------------------------------------------------------------------------------
*/

#include<iostream>
using namespace std;

//SNIPPET
int findOddlyRepeatedElement(int arr[],int size){
    int res = arr[0];    
    for(int i=1;i<size;i++){
      res = res ^ arr[i];
    }
    return res;
}

//APPLICATION
int main(){
    int size;
    cout<<"Enter the odd size of the array: ";
    cin>>size;
    int arr[size];
	for(int i=0;i<size;i++){
        cin>>arr[i];
    }

	int res = findOddlyRepeatedElement(arr,size);
    cout<<"Oddly repeated element is: "<<res<<endl;

    return 0;
}
