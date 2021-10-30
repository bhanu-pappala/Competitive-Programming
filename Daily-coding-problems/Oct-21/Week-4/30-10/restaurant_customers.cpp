#include <bits/stdc++.h>
using namespace std;

#define ll long long 
#define ar array

const int mxN = 2e5;
int n, m;

int main() {
	cin >> n;
	set<ar<int, 2>> s;
	for(int i = 0; i < n; i++){
		int a, b;
		cin >> a >> b;
		s.insert({2*a, 1});
		s.insert({2*b+1, -1});
	}

	int ans = 0, a = 0;
	for(ar<int, 2> c: s){
		a += c[1];
		ans = max(a, ans);
	}
	cout << ans << "\n";
}
