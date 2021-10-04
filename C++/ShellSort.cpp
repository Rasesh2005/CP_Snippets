/* 
------------------------------------------------------------------------------------------------
USERNAME: ishwari20
DESCRIPTION: SHELL SORT IN C++. SHELL SORT IS A HIGHLY EFFICIENT ALGORITHM AND IS BASED UPON INSERTION SORT. 
                                THIS ALGORITHM AVOIDS LARGE SHIFTS AS IN CASE OF INSERTION SORT, IF THE SMALLER 
                                VALUE IS TO THE FAR RIGHT AND HAS TO BE MOVED TO THE FAR LEFT.THIS ALGORITHM 
                                USES INSERTION SORT ON A WIDELY SPREAD ELEMENTS, FIRST TO SORT 
                                THEM AND THEN SORTS THE LESS WIDELY SPACED ELEMENTS. 
DATE: 4/10/2021
------------------------------------------------------------------------------------------------
*/

#include<iostream>
using namespace std;
//SNIPPET
void shellSort(int sort[],int size){
    for(int gap=size/2;gap>0;gap/=2){
        for(int i=gap;i<size;i++){
            int temp=sort[i];
            int j;
            for(j=i;j>=gap&&sort[j-gap]>temp;j-=gap){
                sort[j]=sort[j-gap];
            }
            sort[j]=temp;
        }
    }
}
//APPLICATION
int main(){
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int sort[size];
    cout<<"Enter the Elements to be sorted:";
    for(int i=0;i<size;i++){
        cin>>sort[i];
    }
    shellSort(sort,size);
    cout<<"Array after sorting is: ";
    for(int i=0;i<size;i++){
        cout<<sort[i]<<" ";
    }
    cout<<endl;
    return 0;
}
