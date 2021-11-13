#include<bits/stdc++.h> 
using namespace std;

int substring(string s1, string s2) {
    int temp, j;
    for(int i = 0; s1[i] != '\0'; i++)
    {
        j = 0;
        if(s1[i] == s2[j])
        {
            temp = i;
            while(s1[i] == s2[j])
            {
                i++;
                j++;
            }
            if(s2[j] == '\0')
                return temp;
        }
    }
    return -1;
}

int main() {
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);

    int ans = substring(s1, s2);
    cout << ans << endl;
    return 0;
}
