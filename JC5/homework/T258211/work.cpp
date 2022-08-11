#include <cstdio>
#include <algorithm>

using namespace std;
int n, k;

int main() {
    scanf("%d %d", &n, &k);
    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    sort(a, a + n);
    int tot = unique(a, a + n) - a;
    if (k < tot) printf("%d\n", a[k - 1]);
    else printf("NO RESULT\n");
    return 0;
}
