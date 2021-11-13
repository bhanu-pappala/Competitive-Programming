#include<bits/stdc++.h>
using namespace std;

int M, C, prices[25][25];
int memo[210][25];
int shop(int money, int g) {
    if (money<0) return -1000000000;
    if(g==C) return M-money;
    int ans = -1;
    if(memo[money][g] != -1) return memo[money][g];
    for(int model = 1; model <= prices[g][0]; model++) {
        ans = max(ans, shop(money-prices[g][model], g+1));
    }
    return memo[money][g] = ans;
}

int main() {
    int t, score;
    cin >> t;
    while (t--) {
        scanf("%d %d", &M, &C);
        for(int i = 0; i < C; i++) {
            scanf("%d", &prices[i][0]);
            for(int j = 1; j <= prices[i][0]; j++)
                scanf("%d", &prices[i][j]);
        }
        memset(memo, -1, sizeof memo);
        score = shop(M, 0);
        if (score < 0) printf("no solution\n");
        else printf("%d\n", score);
    }
    return 0;
}
