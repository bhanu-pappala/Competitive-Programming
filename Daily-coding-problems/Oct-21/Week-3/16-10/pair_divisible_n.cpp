#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int divisibleSumPairs(int n, int k, vector<int> ar)
{
    int counter = 0;
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[ar[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        mp[ar[i]]--;
        int required_number = k - ar[i];
        required_number = required_number % k;
        counter += mp[required_number];
    }
    return counter;
}

int main()
{
    int n = 6, k = 3;
    vector<int> a = {1, 6, 2, 3, 1, 2};
    cout << divisibleSumPairs(n, k, a);
}
