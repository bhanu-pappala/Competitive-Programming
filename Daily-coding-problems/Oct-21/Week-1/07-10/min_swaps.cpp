#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int swapCount(vector<int> arr)
{
    vector<pair<int, int>> ans;
    for (int i = 0; i < arr.size(); i++)
    {
        ans[i] = {arr[i], i};
    }
    sort(ans.begin(), ans.end());
    int counter = 0;
    int i = 0;
    while (i < ans.size())
    {
        auto p = ans[i];
        if (i == p.second)
        {
            i++;
            continue;
        }
        else
        {
            counter++;
            swap(ans[i], ans[ans[i].second]);
        }
    }
    cout << counter;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<int> arr(a, a+n);
    swapCount(arr);
    return 0;
}
