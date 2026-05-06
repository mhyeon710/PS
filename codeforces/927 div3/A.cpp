#include <iostream>
#include <algorithm>
#include <string>
#define fio() cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;
 
int main() {
    fio();
    int T; cin >> T;
    while (T--) {
        int N; cin >> N;
        string s; cin >> s;
 
        int cnt = 0;
        for (int i=0; i<N; i++) {
            if (s[i] == '@') {
                cnt++;
                continue;
            }
            if (s[i] == '*' && i<N-1) {
                if (s[i+1] == '*') {
                    break;
                }
            }
        }
        cout << cnt << '\n';
    }
    return 0;
}
