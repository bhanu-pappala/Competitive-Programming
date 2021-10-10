//https://www.hackerrank.com/challenges/between-two-sets/problem 

#include<bits/stdc++.h>
using namespace std;

int getTotalX(vector<int> a, vector<int> b)
{
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int counter = 0, cnt1 = 0, cnt2 = 0;
    int low = a[0], high = b[b.size()-1];

    for(int i = low; i <= high; i++)
    {
        cnt1 = 0, cnt2 = 0;
        for(int j = 0; j < a.size(); j++)
        {
            if(i % a[j] == 0)
                cnt1++;
        }
        if(cnt1 == a.size())
        {
            for(int j = 0; j < b.size(); j++)
            {
                if(b[j] % i == 0)
                    cnt2++;
            }
        }
        if(cnt1 == a.size() && cnt2 == b.size())
            counter++;
    }
    return counter;
}
