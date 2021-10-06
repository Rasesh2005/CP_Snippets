/* 
------------------------------------------------------------------------------------------------
USERNAME: Adarsh08X
DESCRIPTION: Rotate square matrix
DATE: 5/10/2021
------------------------------------------------------------------------------------------------
*/
#include <bits/stdc++.h>

using namespace std;

//SNIPPET
void rotate(vector<vector<int>> &v)
{
    int n=v.size();
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            swap(v[i][j],v[j][i]);
        }
    }
    for(int i=0;i<n;i++){
        reverse(v[i].begin(),v[i].end());
    }
}
int main()
{
    //APPLICATION
    int a = 21, b = 70;
    vector<vector<int>> v = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    rotate(v);
    for(auto i:v){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
