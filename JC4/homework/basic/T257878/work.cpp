#include <cstdio>
#include <algorithm>

using namespace std;
int n;

int main() {
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    sort(a, a + n);
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n%d\n", n);
    return 0;
}
