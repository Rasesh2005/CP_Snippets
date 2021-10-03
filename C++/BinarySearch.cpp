/* 
------------------------------------------------------------------------------------------------
USERNAME: maitreyeep2
DESCRIPTION: THIS PROGRAM FINDS A NUMBER BY BINARY SEARCH,IF NUMBER IS FOUND PRINTS ITS LOCATION ELSE PRINTS "NOT FOUND".
DATE: 3/10/2021
------------------------------------------------------------------------------------------------
*/
#include <bits/stdc++.h>

using namespace std;

//SNIPPET
void bsearch()
{
	int num,no;
cout<<"how many numbers would you like to enter:";
cin>>num;
	cout<<"\n\t Enter Array ";
	 int i,a[num];
  for(i = 0;i<num;i++)
  {
      cout<<"\n\t Enter Value, in sorted manner ";
     cin>>a[i];
 }
cout<<"\n\t Enter Number to Search ";
  cin>>no;
 int min,max,mid,flag;
 min = 0;
 max = num;
 flag = 0;
 while(min<=max)
 {
     mid = (min+max)/2;
     if(no == a[mid])
	 {
	   flag=1;
	   break;
	 }
     else
	 {
	  if(no>a[mid])
	      min = mid+1;
	  else
	      max = mid-1;
	 }
 }
 if(flag == 0)
    cout<<"\n\t Not Found";
 else
 cout<<"\n\t Found at location:"<<mid;
}
int main()
{
  
//APPLICATION
 bsearch();
	return 0;
}
