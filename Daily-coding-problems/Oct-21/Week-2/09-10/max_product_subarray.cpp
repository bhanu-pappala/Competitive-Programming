//https://practice.geeksforgeeks.org/problems/maximum-product-subarray3604/1

#include<bits/stdc++.h>
using namespace std;

#define ll long long

long long getMaxProduct(int arr[], int n)
{
    ll max_prod = arr[0];
    ll curr_max = arr[0];
    ll curr_min = arr[0];

    for(int i = 1; i < n; i++) 
    {
        if(arr[i] < 0)
            swap(curr_min, curr_max);

        curr_max = max((ll arr[i]), curr_max * arr[i]);
        curr_min = min((ll arr[i]), curr_min * arr[i]);
        
        if(curr_max > max_prod)
            max_prod = curr_max;
    }
    return max_prod;
}
