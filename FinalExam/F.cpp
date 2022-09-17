#include <cstdio>

namespace Solution {
    int a, b;

    int main() {
        scanf("%d %d", &a, &b);
        printf("%d\n", a ^ b);
        return 0;
    }
}

int main() {
    return Solution::main();
}
