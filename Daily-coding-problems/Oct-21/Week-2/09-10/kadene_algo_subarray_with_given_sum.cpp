//https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1

#define ll long long

#include<bits/stdc++.h>
using namespace std;

// O(n^2)
ll maxSubarraySum(int arr[], int n)
{
    int max_sum = INT32_MIN;
    int curr_sum = 0;

    for(int i = 0; i < n; i++) 
    {
        curr_sum = 0;
        for(int j = i; j < n; j++)
        {
            curr_sum += arr[j];
            max_sum = max(curr_sum, max_sum);
        }
    }
    return max_sum;
}

// O(n)
ll maxSubarraySum(int arr[], int n)
{
    ll max_sum = INT32_MIN;
    ll curr_sum = 0;

    for(int i = 0; i < n; i++) 
    {
        curr_sum += arr[i];

        if (curr_sum > max_sum)
            max_sum = curr_sum;

        if (curr_sum < 0) 
            curr_sum = 0;

    }
    return max_sum;
}
