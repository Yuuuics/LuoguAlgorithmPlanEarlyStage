#include <cstdio>
#include <queue>

namespace Solution {
    int m;
    int opr, sum, val, x;
    std::queue<int> q;

    int main() {
        scanf("%d", &m);
        while (m--) {
            scanf("%d", &opr);
            if (opr == 1) {
                scanf("%d %d", &val, &x);
                for (int i = 1; i <= x; i++)
                    q.push(val);
            } else if (opr == 2) {
                q.pop();
            }
        }

        for (int i = 1; i <= q.size(); i++) {
            sum += q.front();
            q.pop();
        }
        printf("%d\n", sum);
        return 0;
    }
}

int main() {
    return Solution::main();
}
