#include <cstdio>
#include <algorithm>

namespace Solution {
    int n, ans, competitionF = -100;

    struct node {
        int start{}, finish{};

        friend bool operator < (struct node a, struct node b) {
            return a.finish < b.finish;
        }
    } a[2000000005];

    int main() {
        scanf("%d", &n);
        for (int i = 1; i <= n; i++)
            scanf("%d %d", &a[i].start, &a[i].finish);
        std::sort(a, a + n + 1);

        for (int i = 1; i <= n; i++) {
            if (a[i].start < competitionF)
                continue;
            ans++;
            competitionF = a[i].finish;
        }
        printf("%d\n", ans);
        return 0;
    }
}

int main() {
    return Solution::main();
}
