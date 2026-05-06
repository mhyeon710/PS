
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
 
void fio() { cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(false); }
 
int main() {
    fio();
    int T; cin >> T;
    while (T--) {
        int N;
        cin >> N;
 
        string a, b;
        cin >> a >> b;
 
        int cnt1 = 0;
        int cnt2 = 0;
        for (int i=0; i<N; i++) {
            if (a[i] != b[i]) {
                if (a[i] == '1') cnt1++;
                else cnt2++;
            }
        }
        cout << max(cnt1, cnt2) << '\n';
    }
    return 0;
}