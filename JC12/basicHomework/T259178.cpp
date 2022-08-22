#include <iostream>
#include <cstdio>
#include <string>
#include <stack>

using namespace std;
unsigned long long t;
namespace programNamespace
{
    int main()
    {
        scanf("%llu", &t);
        for (int i = 1; i <= t; i++) {
            stack<unsigned long long> a;
            unsigned long long n;
            scanf("%llu", &n);
            for (int j = 1; j <= n; j++) {
                string s;
                cin >> s;
                if (s == "push") {
                    unsigned long long x;
                    scanf("%llu", &x);
                    a.push(x);
                }
                else if (s == "pop") {
                    if (!a.empty())
                        a.pop();
                    else
                        printf("Empty\n");
                }
                else if (s == "query") {
                    if (!a.empty())
                        printf("%llu\n", a.top());
                    else
                        printf("Anguei!\n");
                }
                else if (s == "size") {
                    printf("%llu\n", a.size());
                }
            }
        }
        return 0;
    }
}

int main() {
    return programNamespace::main();
}
