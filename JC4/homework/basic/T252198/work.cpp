#include <cstdio>
#include <algorithm>

using namespace std;
int n;

bool cmp(int a, int b) {
    return a > b;
}

int main() {
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    sort(a, a + n, cmp);
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
    return 0;
}
