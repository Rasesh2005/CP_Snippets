/* 
------------------------------------------------------------------------------------------------
USERNAME: Deadeye001
DESCRIPTION: THIS CODE FINDS THE ABSOLUTE DIFFERENCE BETWEEN THE DIAGONALS OF A SQUARE MATRIX OF SIZE NxN
DATE: 1/10/2021

SAMPLE INPUT: 
3 
11 2 4 
4 5 6 
10 8 -12

SAMPLE OUTPUT: 
15

EXPLANATION: 
The sum of the elements of the left diagonal = 11+5+(-12) =4 
The sum of the elements of the right diagonal = 10+5+4 =19 
Hence, the absolute difference= |4-19| = 15.
------------------------------------------------------------------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;

void calcdiff(int n)
{
	//SNIPPET
	int arr[n][n];
    int lr=0,rl=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
            if((i+j+2)==(n+1))
            rl+=arr[i][j];
            if(i==j)
            lr+=arr[i][j];
        }
    }    
    cout<<abs(lr-rl);
}
    
int main()
{
    //APPLICATION
    int n;
    cin>>n;
    calcdiff(n);
    return 0;
}
