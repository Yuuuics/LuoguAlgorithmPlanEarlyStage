#include <cstdio>

namespace programNamespace {
	int a, b;

	int ackmann(int m, int n) {
		if (m == 0) return n + 1;
		else {
			if (m > 0 && n == 0) return ackmann(m - 1, 1);
			else if (m > 0 && n > 0) return ackmann(m - 1, ackmann(m, n - 1));
		}
	}

	int main() {
		scanf("%d %d", &a, &b);
		printf("%d\n", ackmann(a, b));
		return 0;
	}
}

int main() {
	return programNamespace::main();
}
