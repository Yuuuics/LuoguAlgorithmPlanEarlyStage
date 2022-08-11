#include <cstdio>

namespace programNamespace {
    unsigned long long t, n, k;

    int main() {
        scanf("%lld", &t);
        for (int i = 1; i <= t; i++) {
            scanf("%lld %lld", &n, &k);
            if ((n & k) == k) printf("1\n");
            else printf("0\n");
        }
        return 0;
    }
}

int main() {
    return programNamespace::main();
}
