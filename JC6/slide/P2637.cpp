#include <cstdio>

int n, m, sum, price, tot;
int a[0x7fff];


int main() {
    scanf("%d %d", &n, &m);
    for (int i = 1; i <= m; i++)
        scanf("%d", &a[i]);
    for (int i = 1; i <= m; i++) {
        int p = a[i];
        sum = 0;
        for (int j = 1; j <= m; j++) {
            if (a[j] >= p) sum++;
            if (sum >= n) sum = n;
            if (p * sum > price) {
                price = p * sum;
                tot = p;
            }
        }
    }
    printf("%d %d\n", tot, price);
    return 0;
}
