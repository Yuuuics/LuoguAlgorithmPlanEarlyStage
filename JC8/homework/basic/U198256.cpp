#include <cstdio>

using namespace std;
int T, c[2010][2010];

int main() {
    c[0][0] = 1;
    for (int i = 1; i <= 2000; i++) {
        c[i][0] = 1;
        for (int j = 1; j <= i; j++) {
            c[i][j] = (c[i - 1][j - 1] + c[i - 1][j]) % 998244353;
        }
    }
    scanf("%d", &T);
    for (int i = 1; i <= T; i++) {
        int n, m;
        scanf("%d %d", &n, &m);
        printf("%d\n", c[n][m]);
    }
    return 0;
}
