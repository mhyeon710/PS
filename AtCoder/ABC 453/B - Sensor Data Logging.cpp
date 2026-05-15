#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T, X;
    cin >> T >> X;

    int now;
    cin >> now;
    cout << 0 << ' ' << now << '\n';

    for (int i=1; i<=T; i++) {
        int x; cin >> x;
        if (abs(now - x) >= X) {
            now = x;
            cout << i << ' ' << now << '\n';
        }
    }
    return 0;
}