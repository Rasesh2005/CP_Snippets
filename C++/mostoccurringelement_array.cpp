/* 
------------------------------------------------------------------------------------------------
USERNAME: maitreyeep2
DESCRIPTION: THIS PROGRAM FINDS A NUMBER BY BINARY SEARCH,IF NUMBER IS FOUND PRINTS ITS LOCATION ELSE PRINTS "NOT FOUND".
DATE: 4/10/2021
------------------------------------------------------------------------------------------------
*/

#include<iostream>

using namespace std;

void most_occurred_element(int nums[], int n)
{
  int max = 0;
  cout << "\nMost occurred number: ";
  for (int i=0; i<n; i++)
  {
   int count=1;
   for (int j=i+1;j<n;j++)
       if (nums[i]==nums[j])
           count++;
   if (count>max)
      max = count;
  }

  for (int i=0;i<n;i++)
  {
   int count=1;
   for (int j=i+1;j<n;j++)
       if (nums[i]==nums[j])
           count++;
   if (count==max)
       cout << nums[i] << endl;
  }
 }
 
int main()
{
    int n;
cout<<"how many numbers would you like to enter:";
cin>>n;
cout<<"\n\t Enter Array ";
int i,nums[n];
  for(i = 0;i<n;i++)
  {
     cout<<"\n\t Enter Value: ";
     cin>>nums[i];
}
 most_occurred_element(nums, n);
 return 0;
   
}
