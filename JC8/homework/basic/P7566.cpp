#include <cstdio>

namespace programNamespace {
    int n;
    long long cntm, cntc, cnto, cnti;
    long long ans;
    char s[110];
    
    int main() {
        scanf("%d", &n);
        for (int i = 1; i <= n; i++) {
            scanf("%s", s);
            if (s[0] == 'M') cntm++;
            else if (s[0] == 'C') cntc++;
            else if (s[0] == 'O') cnto++;
            else if (s[0] == 'I') cnti++;
        }
        ans = cntm * cnti * (cntc + cnto) + cntc * cnto * (cntm + cnti);
        printf("%lld\n", ans);
        return 0;
    }
}

int main() {
    return programNamespace::main();
}
