#include <iostream>
#include <algorithm>
#define fio() cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;
 
int main() {
    fio();
    int T; cin >> T;
    while (T--) {
        int N; cin >> N;
        int arr[3] = {0, 0, 0};
        int sum = 0;
        for (int i=0; i<N; i++) {
            int x; cin >> x;
            x %= 3;
            arr[x]++;
            sum += x;
        }
 
        if (sum%3 == 0) cout << "0\n";
        else if (sum%3 == 1) {
            if (arr[1]) cout << "1\n";
            else cout << "2\n";
        }
        else {
            cout << "1\n";
        }
    }
    return 0;
}