#include <bits/stdc++.h>
using namespace std;

int n, m;
char a[105][105];

void input()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> a[i] + 1;
}

int dx[] = {-1, -1, -1, 0, +1, +1, +1, 0};
int dy[] = {-1, 0, +1, +1, +1, 0, -1, -1};

int countMines(int x, int y)
{
    int res = 0;

    for (int i = 0; i < 8; i++)
        if (a[x + dx[i]][y + dy[i]] == '*')
            res++;

    return res;
}

void work()
{
    for (int x = 1; x <= n; x++)
    {
        for (int y = 1; y <= m; y++)
        {
            if (a[x][y] == '*')
                putchar('*');
            else
                printf("%d", countMines(x, y));
        }
        puts("");
    }
}

int main()
{
    input();
    work();

    return 0;
}
