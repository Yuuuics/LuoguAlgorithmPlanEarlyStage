#include <iostream>
#include <string>

namespace programNamespace {
	using namespace std;

	string read() {
		int n;
		string ans = "", tmp;
		char c;
		while (cin >> c) {
		if (c == '[') {
			cin >> n;
			tmp = read();
			while (n--) ans += tmp;
		} else {
			if (c == ']') return ans;
		    else ans += c;
		}
	}
}

	int main() {
		ios::sync_with_stdio(false);
		cout << read() << endl;
		return 0;
	}
}

int main() {
    return programNamespace::main();
}
