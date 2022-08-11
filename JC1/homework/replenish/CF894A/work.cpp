#include <cstdio>
#include <cstring>

using namespace std;
char s[101] = {'\0'};
int len, cnt;

int main() {
    scanf("%s", s);
    len = strlen(s);
    for (int i = 0; i < len; i++)
        for (int j = i + 1; j < len; j++)
            for (int k = j + 1; k < len; k++)
                if (s[i] == 'Q' && s[j] == 'A' && s[k] == 'Q')
                    cnt++;
    printf("%d\n", cnt);
    return 0;
}
