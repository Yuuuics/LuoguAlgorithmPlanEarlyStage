#include <iostream>
#include <cstring>
#include <algorithm>

#define MAXN 155

using namespace std;
struct bigInt {
    int len, a[MAXN];
    /* 为了兼顾效率与代码复杂度，用len记录位数，a记录每个数位 */
    bigInt(int x = 0) {
        // 通过初始化使得这个大整数能够表示整形x，默认为0
        memset(a, 0, sizeof(a));
        for (len = 1; x; len++)
            a[len] = x % 10, x /= 10;
        len--;
    }
    int &operator[] (int i) {
        return a[i];        // 重载[]，可以直接用x[i]表示x.a[i]，编写时更加自然
    }
    void flatten(int L) {
        /* 一口气处理1到L范围内的进位并重置长度。需要保证L不小于有效长度 */
        // 因为相当于把不是一位数的数都处理成一位数，故取名“展平”
        len = L;
        for (int i = 1; i <= len; i++)
            a[i + 1] += a[i] / 10, a[i] %= 10;
        for (; !a[len]; )   // 重置长度成为有效长度
            len--;
    }
    void print() {
        for (int i = max(len, 1); i >= 1; i--)
            printf("%d", a[i]);
    }
};

bigInt operator+(bigInt a, bigInt b) {      /* 表示两个bigInt类相加，返回一个bigInt类 */
    bigInt c;
    int len = max(a.len, b.len);
    for (int i = 1; i <= len; i++)
        c[i] += a[i] + b[i];        // 计算贡献
    c.flatten(len + 1);     // 答案不超过len + 1位，所以用len+1做一遍“展平”处理进位
    return c;
}

bigInt operator*(bigInt a, int b) {     /* 表示bigInt类乘整型变量，返回一个bigInt类 */
    bigInt c;
    int len = a.len;
    for (int i = 1; i <= len; i++)
        c[i] = a[i] * b;        // 计算贡献
    c.flatten(len + 11);        // int类型最长10位，所以可以这样做一遍“展平”处理进位
    return c;
}

int main() {
    ios::sync_with_stdio(false);
    bigInt ans(0), fac(1);      /* 分别用0和1初始化ans与fac，如果要将常数赋值给大整数，可以使用类似于ans = bigInt(233)的方法 */
    int m;
    cin >> m;
    for (int i = 1; i <= m; i++) {
        fac = fac * i;      // 模拟题意
        ans = ans + fac;
    }
    ans.print();
    return 0;
}
