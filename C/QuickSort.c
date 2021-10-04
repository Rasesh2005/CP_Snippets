/* 
------------------------------------------------------------------------------------------------
USERNAME: AniketNayek3101
DESCRIPTION: THIS PROGRAM SORTS AN ARRAY OF NUMBER USING QUICK SORT TECHNIQUE
DATE: 4/10/2021
------------------------------------------------------------------------------------------------
*/
#include <stdio.h>

void Print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

//SNIPPET

int Partition(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low + 1;
    int j = high;
    int temp;
    do
    {
        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    } while (i < j);
    temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;
    return j;
}

void Quick_Sort(int arr[], int low, int high)
{
    int idx;
    if (low < high)
    {
        idx = Partition(arr, low, high);
        Quick_Sort(arr, low, idx - 1);
        Quick_Sort(arr, idx + 1, high);
    }
}
 //APPLICATION
int main()
{
    int n;
    int arr[100];
    
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    Quick_Sort(arr, 0, n - 1);
    Print(arr, n);

    return 0;
}
