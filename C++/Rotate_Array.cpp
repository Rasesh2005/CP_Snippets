/* 
------------------------------------------------------------------------------------------------
USERNAME: VaibhavMogha
DESCRIPTION: THIS PROGRAM ROTATES THE ARRAY TO LEFT.
DATE: 2/10/2021
------------------------------------------------------------------------------------------------
*/
#include <bits/stdc++.h>
using namespace std;
void left_rotate_by_one(int arr[], int n)
{
cout<<"\nArray elements before rotating : \n";
for(int i = 0; i < n; i++)
{
cout<<arr[i]<<"\t";
}
int temp = arr[0], i;
for (i = 0; i < n - 1; i++)
arr[i] = arr[i + 1];
arr[i] = temp;
int no_of_rotations = 1;  
for (int i = 0; i < no_of_rotations; i++)
cout<<"\n\nArray elements after rotating : \n";
for(int i = 0; i < n; i++)
{
cout<<arr[i]<<"\t";
} 
cout<<"\n";
}

int main()
{
int arr[20],n;
cout<<"enter size";
cin>>n;
cout<<"enter elements";
for(int i = 0; i < n; i++)
cin>>arr[i];
left_rotate_by_one(arr, n);
return 0;
}