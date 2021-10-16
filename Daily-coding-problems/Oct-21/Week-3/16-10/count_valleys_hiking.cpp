// https://www.hackerrank.com/challenges/counting-valleys/problem

#include <bits/stdc++.h>

using namespace std;

int countingValleys(int steps, string path)
{
    int countValleys = 0, altitude = 0, flagUp = 0;
    for (int i = 0; i < steps; i++)
    {
        if (path[i] == 'U')
            altitude++, flagUp = 1;
        else if (path[i] == 'D')
            altitude--, flagUp = 0;
        if (altitude == 0 and flagUp == 1)
        {
            countValleys++;
        }
    }
    return countValleys;
}
