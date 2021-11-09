#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() 
{
	int n;
	ll A[n][n];
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
		{
			scanf("%d", &A[i][j]);
			if(i > 0) A[i][j] += A[i-1][j];
			if(j > 0) A[i][j] += A[i][j-1];
			if(i > 0 && j > 0) A[i][j] -= A[i-1][j-1];
		}

	ll maxSumRect = -127 * 100 * 100;
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
			for(int k = 0; k < n; k++)
				for(int l = j; l < n; l++)
				{
					ll subRect = A[k][l];
					if(i > 0) subRect -= A[i-1][l];
					if(j > 0) subRect -= A[k][j-1];
					if(i > 0 && j > 0) subRect += A[i-1][j-1];
					maxSubRect = max(maxSubRect, subRect);
				}
	cout << maxSubRect << "\n";

}
