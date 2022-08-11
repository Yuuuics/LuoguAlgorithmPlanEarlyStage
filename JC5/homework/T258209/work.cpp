#include <iostream>
#include <map>
#include <set>

using namespace std;
int n, input;
set<int> num;
set<int> :: iterator selfIterator;
map<int, int> m;

int main() {
    ios::sync_with_stdio(false);
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> input;
        m[input]++;
        num.insert(input);
    }
    for (selfIterator = num.begin(); selfIterator != num.end(); selfIterator++)
        printf("%d %d\n", *selfIterator, m[*selfIterator]);
    return 0;
}
