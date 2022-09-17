#include <cstdio>

namespace Solution {
    int n, a[5050000];
    
    int main() {
        scanf("%d", &n);
        for (int i = 1; i <= n; i++)
            scanf("%d", &a[i]);
        
        for (int i = 1; i <= n; i++)
            if (i % 2 != 0)
                printf("%d ", a[i]);
        for (int i = 1; i <= n; i++)
            if (i % 2 == 0)
                printf("%d ", a[i]);
        printf("\n");
        return 0;
    }
}

int main() {
    return Solution::main();
}
