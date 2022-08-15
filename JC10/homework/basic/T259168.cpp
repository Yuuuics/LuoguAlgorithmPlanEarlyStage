#include <cstdio>
#include <cmath>

namespace programNamespace {
	double a, b;

	double f(double x, double n) {
		if (n == 1) return sqrt(1 + x);
		else return sqrt(n + f(x, n - 1));
	}

	int main() {
		scanf("%lf %lf", &a, &b);
		printf("%.2lf\n", f(a, b));
		return 0;
	}
}

int main() {
	return programNamespace::main();
}
