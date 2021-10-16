// https://www.hackerrank.com/challenges/picking-numbers/problem

#include<bits/stdc++.h>

using namespace std;

int pickingNumbers(vector<int> a) {
    int freq_count[101]={0};
    for (int i=0; i<a.size(); i++) {
        freq_count[a[i]]++;
    }
    int max_count=INT32_MIN;
    for (int i=1; i<=100; i++) {
        max_count=max(max_count,freq_count[i]+freq_count[i+1]);
    }
    return max_count;
}
