package com.company;

public class Main {

    void bubbleSort(int arr[]) {
        int n = arr.length;
        for (int i = 0; i < n - 1; i++)
            for (int j = 0; j < n - i - 1; j++)

                if (arr [j] > arr[j+1]){

                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }

    }
    void printArr(int arr[]){
        int n =arr.length;
        for (int i = 0; i<n; ++i)
            System.out.print(arr[i] + "");
        System.out.println();
    }
    public static void main (String args[])
    {
        Main ob = new Main();
        int arr[] = {76 , 97,  75 , 11  , 27, 38, 82, 65 };
        ob.bubbleSort(arr);
        System.out.println("Your Array Is Sorted");
        ob.printArr(arr);
    }
}
