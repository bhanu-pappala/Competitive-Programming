//https://www.hackerrank.com/challenges/cats-and-a-mouse/problem

#include <bits/stdc++.h>

using namespace std;

string catAndMouse(int x, int y, int z)
{
    string ans = "";
    if (abs(z - x) == abs(z - y))
    {
        ans = "Mouse C";
    }
    else if (abs(z - x) < abs(z - y))
    {
        ans = "Cat A";
    }
    else
    {
        ans = "Cat B";
    }
    return ans;
}
