#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() 
{
	int n;
	int i, j;
	int A[n][n];
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
		{
			scanf("%d", &A[i][j]);
			if (i > 0) A[i][j] += A[i - 1][j];
			if (j > 0) A[i][j] += A[i][j - 1];
			if (i > 0 && j > 0) A[i][j] -= A[i - 1][j - 1];
		}

	int maxSubRect = -116;
	int subRect=0;
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
			for(int k = i; k < n; k++)
				for(int l = j; l < n; l++)
				{
					subRect = A[k][l];
					if(i > 0) subRect -= A[i-1][l];
					if(j > 0) subRect -= A[k][j-1];
					if(i > 0 && j > 0) subRect += A[i-1][j-1];
					maxSubRect = max(maxSubRect, subRect);
				}

	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
			cout << A[i][j] << " ";
		cout << "\n";
	}
}
