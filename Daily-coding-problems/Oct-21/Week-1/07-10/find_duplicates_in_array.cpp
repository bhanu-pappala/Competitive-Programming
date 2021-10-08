#include<bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int> &nums)
{
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        nums[nums[i] % n] = nums[nums[i] % n] + n;
    }
    for (int i = 0; i < n; i++)
    {
        if (nums[i] > n * 2)
        {
            cout << i << " ";
        }
    }
    return 0;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    vector<int> ar(arr, arr+n);
    findDuplicate(ar);
    return 0;
}
