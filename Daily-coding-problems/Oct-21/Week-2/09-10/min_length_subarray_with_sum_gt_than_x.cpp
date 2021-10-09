//https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1

#define ll long long

#include<bits/stdc++.h>
using namespace std;

int getMinSubArray(int arr[], int n, int x)
{
    int min_length = INT32_MAX;
    int i = 0, j = 0, curr_sum = 0;
    while (i <= j && j < n)
    {
        while (curr_sum <= x && j < n)
        {
            curr_sum += arr[j];
            j++;
        }
        while (i <= j && curr_sum > x)
        {
            min_length = min(min_length, j - i);
            curr_sum -= arr[i];
            i++;
        }
    }
    return min_length;
}
