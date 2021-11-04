#include<bits/stdc++.h>
using namespace std;

#define ll long long 

ll c, s;
ll num=1;
int main()
{
	while(cin >> c >> s)
	{
		ll arr[2*c] = {0};
		ll sum = 0;
		double imbal=0;
		for(ll i = 0; i < s; i++)
		{
			cin >> arr[i];
			sum += arr[i];
		}

		long double avg = (long double)sum / c;
		sort(arr, arr+2*c);

		printf("Set #%d\n", num);
		for(ll i = 0; i < c; i++)
		{
			printf(" %d:", i);
			if(arr[i]) printf(" %d", arr[i]);
			if(arr[2*c - 1 - i]) printf(" %d", arr[2*c -1 -i]);
			printf("\n");
			imbal += abs(arr[2*c-i-1] + arr[i] - avg);

		}
		printf("IMBALANCE = %.5f\n\n", imbal);
		num++;
	}
}
