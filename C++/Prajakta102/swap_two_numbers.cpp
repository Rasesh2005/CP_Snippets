
#include <bits/stdc++.h>
using namespace std;
void swap_way_1(int a, int b)
{
    int t = a;
    a = b;
    b = t;
    cout << "WAY 1 : "<< a << "  &  " << b << endl;
}
void swap_way_2(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    cout << "WAY 2 : "<< *a << "  &  " << *b << endl;
}

void swap_way_3(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
    
}
void swap_way_4(int a, int b)
{
    swap(a, b);
    cout << "WAY 4 : "<< a << "  &  " << b << endl;
}
void swap_way_5(int a, int b)
{
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "WAY 5 : "<< a << "  &  " << b << endl;
}
int main()
{
    int a = 5, b = 10;
    swap_way_1(a, b);
    swap_way_2(&a, &b);
    swap_way_3(a, b);
    cout << "WAY 3 : "<< a << "  &  " << b << endl;
    swap_way_4(a, b);
    swap_way_5(a, b);
}
