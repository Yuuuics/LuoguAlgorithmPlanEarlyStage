#include <cstdio>

namespace Solution {
    int n, m, tmp;
    int a[2000005];

    int main() {
        scanf("%d %d", &n, &m);
        for (int i = 1; i <= n; i++)
            scanf("%d", &a[i]);
        for (int i = 1; i <= m; i++) {
            scanf("%d", &tmp);
            printf("%d\n", a[tmp]);
        }
        return 0;
    }
}

int main() {
    return Solution::main();
}
