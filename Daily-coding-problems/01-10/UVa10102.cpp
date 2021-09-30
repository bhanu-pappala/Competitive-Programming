#include<bits/stdc++.h>
using namespace std;

typedef pair<int, int> pos;

int main() {
    int m;
    string input;
    vector<pos> ones;
    vector<pos> threes;

    while(cin >> m) {
        ones.clear();
        threes.clear();

        for (int i = 0; i < m; i++){
            cin >> input;
            for(int j = 0, sz = input.size(); j < sz; j++){
                if (input[j] == '1')
                    ones.push_back(make_pair(i, j));
                else if (input[j] == '3')
                    threes.push_back(make_pair(i, j));
            }
        }

        int result = -1;
        for(int i = 0, sz = ones.size(); i < sz; i++) {
            int max = -1;
            for(int j = 0, sz1 = threes.size(); j < sz1; j++) {
                int temp = abs(ones[i].first - threes[j].first) + abs(ones[i].second - threes[i].second);
                if (max==-1)
                    max = temp;
                else if (max > temp)
                    max = temp;
            }
            if (result == -1)
                result = max;
            else if (result < max)
                result = max;
        }
        cout << result << "\n" ;
    }
    return 0;
}
