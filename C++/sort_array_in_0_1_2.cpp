/* 
------------------------------------------------------------------------------------------------
USERNAME: Prajakta102
DESCRIPTION: THIS PROGRAM SORT THE ARRAY IN 0 1 AND 2 USING DUTCH NATIONAL FLAG ALGORITHM
DATE: 3/10/2021
------------------------------------------------------------------------------------------------
*/
#include<bits/stdc++.h>
using namespace std;

 
// Linear time partition routine to sort an array containing 0, 1, and 2.
// It is similar to 3–way partitioning for the Dutch national flag problem.
void Dutch_flag_algorithm(int A[], int end)
{
    int start = 0, mid = 0;
    int pivot = 1;
 
    while (mid <= end)
    {
        if (A[mid] < pivot)         // current element is 0
        {
            swap(A[start],A[mid]);
            ++start, ++mid;
        }
        else if (A[mid] > pivot)    // current element is 2
        {
            swap(A[mid],A[end]);
            --end;
        }
        else {                      // current element is 1
            ++mid;
        }
    }
}
 
int main()
{
    int n;
    cout<<"enter the sie of array: ";cin>>n;
    int A[n];
    cout<<"enter the elements of array: ";
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    Dutch_flag_algorithm(A, n - 1);
 
    for (int i = 0; i < n; i++) {
        cout<<A[i]<<" ";
    }
 
    return 0;
}