#include <cstdio>

int n, t;

int main() {
    scanf("%d", &n);
    t = n / 14;
    for (int z = t; z >= 0; z--) {
        n = n - (z * 14);
        for (int i = n / 3; i >= 0; i--) {
            for (int j = (n - i * 3) / 4; j >= 0; j--) {
                for (int k = (n - i * 3 - j * 4) / 7; k >= 0; k--) {
                    if ((3 * i) + (4 * j) + (7 * k) == n) {
                        printf("%d %d %d\n", k + z, j + z, i + z);
                        return 0;
                    }
                }
            }
        }
        n = n + z * 14;
    }
    printf("-1\n");
    return 0;
}
