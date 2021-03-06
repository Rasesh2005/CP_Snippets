/* 
------------------------------------------------------------------------------------------------
USERNAME: ishwari20
DESCRIPTION: PROGRAM FOR HEAP SORT IN C++
DATE: 4/10/2021
------------------------------------------------------------------------------------------------
*/

#include <iostream>
using namespace std;

//SNIPPET
//To place the element at idx to its right position
void Heapify(int arr[],int idx,int size){

    int l=2*idx+1;
    int r=2*idx+2;
    int maxx=idx;
    
    if(l<size && arr[l]>arr[maxx])maxx=l;
    if(r<size && arr[r]>arr[maxx])maxx=r;
    swap(arr[maxx],arr[idx]);
    if(maxx!=idx)
    {
        Heapify(arr,maxx,size);
    }
}

//APPLICATION
int main()
{
    cout<<"Enter the size of the array:";
    int n;
    cin>>n;
    cout<<"Enter elements to be sorted:";
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];

    //For building Heap   
    for(int i=(n-2)/2;i>=0;i--)          
    {
       Heapify(arr,i,n); 
    }

    //For extracting the maximum and placing it at the last of unsorted part
    for(int i=n-1;i>=1;i--)
    {
        swap(arr[0],arr[i]);
        Heapify(arr,0,i);
    }
    
    //Printing the array
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
