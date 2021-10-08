//check if it is possible to convert a string to palindrome by removing exactly one character.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int n = str.size();
    int i = 0, j = n-1, count = 0;
    
    while(i < j)
    {
        if(str[i] == str[j]) {
            i++; j++;
        }
        
        else if (str[i+1] == str[j]) {
            count++; i++;
        }
        else if (str[i] == str[j-1]) {
            count++; j--;
        }
        else break;
        
    }
    if(i < j)
        cout << "Convertable to palindrome" << endl;
    else 
        cout << "Not Convertable" << endl;

    return 0;
}
