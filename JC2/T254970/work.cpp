#include <cstdio>
#include <cmath>

const int MAXN = int(pow(10, 5));
int ans = -1, n, x, y, a[MAXN], b[MAXN], g[MAXN], k[MAXN];

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d %d %d %d", &a[i], &b[i], &g[i], &k[i]);
    scanf("%d %d", &x, &y);
    
    for (int i = 0; i < n; i++)
        if (x >= a[i] && y >= b[i] && x <= a[i] + g[i] && y <= b[i] + k[i])
            ans = i + 1;        // 最上面毯子的编号
    printf("%d\n", ans);
    return 0;
}
