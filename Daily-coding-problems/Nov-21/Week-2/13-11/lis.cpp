#include<bits/stdc++.h>
using namespace std;

#define MAX_N 100000

void print_array(const char *s, int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		if(i)
			printf(", ");
	    else
			printf("%s: [", s);
		printf("%d", a[i]);
	}
	printf("]\n");
}

void reconstruct_print(int end, int a[], int p[])
{
	int x = end;
	stack<int> s;
	for(; 
}


