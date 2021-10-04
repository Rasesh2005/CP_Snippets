/* 
------------------------------------------------------------------------------------------------
USERNAME: AniketNayek3101
DESCRIPTION: THIS PROGRAM SORTS AN ARRAY OF NUMBER USING INSERTION SORT TECHNIQUE
DATE: 4/10/2021
------------------------------------------------------------------------------------------------
*/
#include <stdio.h>
#include <stdbool.h>
//SNIPPET
void insertion_sort(int arr[], int n){
    for(int i =1;i<n;i++){
        int key = arr[i];
        int j =i-1;
        while(j>0 && arr[i]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    
}

//APPLICATION
int main()
{
    int arr[]={1,2,3,4,5};
    int n =sizeof(arr)/sizeof(arr[0]);
    insertion_sort(arr,n);
    for(int i =0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
