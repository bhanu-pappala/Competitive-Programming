#include<bits/stdc++.h>
using namespace std;

string leftShift(string s, int k)
{
    return s.substr(k) + s.substr(0, k);
}

string rightShift(string s, int k)
{
    return s.substr(k+1) + s.substr(0, k+1);
}

int main() {
    string s;
    getline(cin, s);
    cout << rightShift(s, 4) << endl;
    cout << leftShift(s, 4) << endl;
    cout << rightShift(s, 6) << endl;
    cout << leftShift(s, 6) << endl;
    return 0;
}
