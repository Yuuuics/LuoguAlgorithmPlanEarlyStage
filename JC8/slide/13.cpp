#include <cstdio>

namespace programNamespace {
    using namespace std;
    int ans;

    int main() {
        for (int i = 1; i <= 5; i++)
            for (int j = i + 1; j <= 5; j++)
                for (int k = j + 1; k <= 5; k++)
                    ans++;
        printf("%d\n", ans);
        return 0;
    }
}

int main() {
    return programNamespace::main();
}
