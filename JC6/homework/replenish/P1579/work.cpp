#include <cstdio>

int n;

bool isPrime(int x) {
    for (int i = 2; i * i <= x; i++)
        if (x % i == 0) return false;
    return true;
}

int main() {
    scanf("%d", &n);
    for (int i = 2; i <= n / 3; i++) {
        if (!isPrime(i)) continue;
        for (int j = 2; j <= (n - i) / 3; j++) {
            if (!isPrime(j)) continue;
            int k = n - i - j;
            if (isPrime(k)) {
                printf("%d %d %d\n", i, j, k);
                return 0;
            }
        }
    }
    return 0;
}
