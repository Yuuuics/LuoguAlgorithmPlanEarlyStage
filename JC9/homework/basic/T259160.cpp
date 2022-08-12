#include <cstdio>

namespace programNamespace {
    int cityMap[10005][10005], fixCross[10005][10005];
    int a, b, n, x, y;
    int main() {
        scanf("%d%d%d", &a, &b, &n);
        while (n--)
        {
            scanf("%d%d", &x, &y);
            fixCross[x][y] = -1;
        }
        cityMap[1][1] = 1;
        for (int i = 1; i <= a; i++)
            for (int j = 1; j <= b; j++)
                if (fixCross[i][j] == 0)
                    cityMap[i][j] += cityMap[i - 1][j] + cityMap[i][j - 1];
        printf("%d", cityMap[a][b]);
        return 0;
    }
}

int main() {
    return programNamespace::main();
}
