#include <bits/stdc++.h>
using namespace std;

#define ll long long 
#define ar array

const int mxN = 2e5;
int n, k;

int main() {
	cin >> n >> k;
	map<int, int> mp;
	for(int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		if(mp.find(k-a) != mp.end()){
			cout << mp[k-a] + 1 << " " << i + 1;
			return 0;
		}
		mp[a] = i;
	}
	cout << "IMPOSSIBLE" << "\n";

}
