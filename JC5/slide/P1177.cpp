#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
vector<int> container;
int n;

void getUserInput() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x; 
        cin >> x;
        container.push_back(x);
    }
}

void work() {
    sort(container.begin(), container.end());
}

void systemOutput() {
    for (int i = 0; i < container.size(); i++)
        cout << container[i] << ' ';
}

int main() {
    ios::sync_with_stdio(false);
    getUserInput();
    work();
    systemOutput();
    return 0;
}
