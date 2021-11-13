#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    long nums[1000], result[1000000];
    int counter = 0;

    while(cin >> n) {
        if(!n)
            break;

        counter++;

        for(int i = 0; i < n; i++) {
            cin >> nums[i];
        }

        int pos = 0;
        for (int i = 0; i < n; i++) {
            for(int j = i+1; j < n; j++) {
                if (nums[i] == nums[j]) continue;
                result[pos] = nums[i] + nums[j];
                pos++;
            }
        }

        sort(result, result+pos);

        cin >> m;

        int temp;
        cout << "Case " << counter << ":" << "\n";

        while(m--) {
            cin >> temp;

            int best = -1;
            for(int i = 0; i < pos; i++) {
                if(result[i] > temp) {
                    if (best == -1 || result[i] - temp < temp - best) 
                        best = result[i];
                    break;
                }
                best = result[i];
            }

            cout << "Closest sum to " << temp << " is " << best << "." << "\n"; 
        }
    }
    return 0;
}
