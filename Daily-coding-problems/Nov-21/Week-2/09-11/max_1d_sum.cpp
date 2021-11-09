#include<bits/stdc++.h>
using namespace std;

int main() 
{
	int n;
	cin >> n;
	int temp, sum=0, ans=0;
	for(int i = 0; i < n; i++)
	{
		cin >> temp;
		sum += temp;
		ans = max(ans, sum);
		if(sum < 0) sum = 0;
	}
	cout << "Max 1D range sum is: " << ans ;
	return 0;
}
