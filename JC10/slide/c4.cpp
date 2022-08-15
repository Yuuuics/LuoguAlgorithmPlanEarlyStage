#include <cstdio>

namespace programNamespace {
	unsigned long long f(unsigned long long n) {
		if (n == 1 || n == 2) return 1;
		return f(n - 1) + f(n - 2);
	}

	int main() {
		unsigned long long n;
		scanf("%lld", &n);
		printf("%lld\n", f(n));
		return 0;
	}
}

int main() {
	return programNamespace::main();
}
