// https://prepinsta.com/tcs-digital/advanced-coding/

#include<bits/stdc++.h>
using namespace std;

int gregLeap(int a)
{
    if (a % 400 == 0)
    {
        return 4;
    }
    else if (a % 4 == 0 && a % 100 != 0)
    {
        return 5;
    }
    return 6;
}


int getCalendar(int a)
{
    if (a < 1918)
    {
        if (a % 4 == 0)
        {
            return 1; //Julian and leap
        }
        else
        {
            return 2; //Julian and non leap
        }
    }
    else if (a == 1918)
    {
        return 3; //non-leap but special
    }
    else
    {
        int isLeap = gregLeap(a);
        return isLeap;
    }
}


int main()
{
    int year;
    cin >> year;
    int isLeap = getCalendar(year);
    if (isLeap == 4 || isLeap == 5 || isLeap == 1)
    {
        cout << "12.09." << year;
    }
    else if (isLeap == 6 || isLeap == 2)
    {
        cout << "13.09." << year;
    }
    else if (isLeap == 3)
    {
        cout << "26.09." << year;
    }
}


/* Problem Statement:- Jaya invented a Time Machine and wants to test it by time-traveling to visit Russia on the Day of Programmer (the 256thday of the year) during a year in the inclusive range from 1700 to 2700. From 1700 to 1917 , Russia’s official calendar was the Julian Calendar since 1919 they used the Gregorian calendar system. The transition from the Julian to Gregorian calendar system occurred in 1918 , when the next day after 31 January was February 14 . This means that in 1918, February 14 was the 32nd day of the year in Russia. In both calendar systems, February is the only month with a variable amount of days; it has 29 days during a leap year, and 28 days during all other years. In the Julian calendar, leap years are divisible by 4 ; in the Gregorian calendar, leap years are either of the following:

Divisible by 400
Divisible by 4 and not divisible by 100
Given a year, y, find the date of the 256th day of that year according to the official Russian calendar during that year. Then print it in the format dd.mm.yyyy, where dd is the two-digit day, mm is the two-digit month, and yyyy is y.

For example, the given year is 1984.1984 is divisible by 4, so it is a leap year. The 256 day of a leap year after 1918 is September 12, so the answer is 12.9.1984. 

 */
