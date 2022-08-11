#include <cstdio>
#include <algorithm>

int a, b, l, ap, bp;

int main() {
    scanf("%d %d %d", &a, &b, &l);
    ap = l, bp = 1;
    for (int i = 1; i <= l; i++)
        for (int j = 1; j <= l; j++)
            if (std::__gcd(i, j) == 1 && i * b >= j * a && i * bp < j * ap)
                ap = i, bp = j;
    printf("%d %d\n", ap, bp);
    return 0;
}
