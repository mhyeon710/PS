#include <iostream>
#include <algorithm>
using namespace std;
 
void fio() { cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(false); }
 
int main() {
    fio();
    int T; cin >> T;
    while (T--) {
        int N, M;
        cin >> N >> M;
        if (M%2) M--;
        cout << N * M / 2 << '\n';
    }
    return 0;
}