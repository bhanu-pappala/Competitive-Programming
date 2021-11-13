// https://practice.geeksforgeeks.org/problems/chocolate-distribution-problem3825/1#

#include<bits/stdc++.h>
using namespace std;

long long findMinDiff(vector<long long> arr, long long n, long long m) 
{
    sort(arr.begin(), arr.end());
    int min_diff = INT32_MAX;
    for(int i = 0; i <= n-m; i++) 
    {
        int temp = arr[i+m-1] - arr[i];
        if (temp < min_diff)
            min_diff = temp;

    }
    return min_diff;
}

long long findMinDiff(vector<long long> a, long long n, long long m){
    sort(a.begin(),a.end());
    long long s = 0;
    long long e = m-1;
    long long  mn = INT_MAX;
    while(e<n)
        mn= min(mn,a[e++]-a[s++]);
    return mn;
}   
