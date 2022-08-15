#include <iostream>
#include <algorithm>

namespace programNamespace {
	using namespace std;
	int a, b;

	int main() {
    	ios::sync_with_stdio(false);
    	cin >> a >> b;
    	cout << __gcd(a, b) << endl;
    	return 0;
	}
}

int main() {
	return programNamespace::main();
}
