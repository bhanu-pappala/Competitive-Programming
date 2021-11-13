#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

int main() 
{
	int n, m;
	while(scanf("%d %d", &n, &m), (n||m))
	{
		vi d(n);
		vi k(m);
		for(int i = 0; i < n; i++)
			cin >> d[i];
		for(int i = 0; i < m; i++)
			cin >> k[i];

		sort(d.begin(), d.end());
		sort(k.begin(), k.end());

		int gold=0, a=0, b=0;

		while((a < n) && (b < m))
		{
			while((b<m) && (k[b] < d[a])) b++;
			if(b == m) break;
			gold += k[b];
			a++; b++;
		}
		if(a == n)
			cout << gold << "\n";
		else
			cout << "Loowater is doomed!\n";
	}
	return 0;
}
