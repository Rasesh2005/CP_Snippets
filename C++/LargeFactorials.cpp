/* 
------------------------------------------------------------------------------------------------
USERNAME: GeekyGoyal
DESCRIPTION: THIS PROGRAM CALCULATES THE FACTORIAL OF LARGE NUMBERS.
DATE: 02/10/2021
------------------------------------------------------------------------------------------------
*/

#include <iostream>
#include <vector>
#include <algorithm>
#define ll  long long int

using namespace std;

void multiply(vector<ll> &ans, int num) {
	int carry = 0;
	for(int i = 0; i < ans.size(); i++) {
		ll prod = ans[i] * num + carry;
		carry = prod/10;
		ans[i] = prod%10;
	}
	while(carry) {
		ans.push_back(carry%10);
		carry /= 10;
	}
}

void factorial(int n) {
	vector<ll> ans;
	ans.push_back(1);
	for(int i = 2; i <= n; i++) {
		multiply(ans, i);
	}
	reverse(ans.begin(), ans.end());
	for(int i = 0; i < ans.size(); i++) {
		cout << ans[i];
	}
	cout << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		factorial(n);
	}
	return 0;
}
