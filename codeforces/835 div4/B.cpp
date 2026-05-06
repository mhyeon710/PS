#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
 
void fio() { cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(false); }
 
int main() {
    fio();
    int T; cin >> T;
    while (T--) {
        string s; cin >> s >> s;
        int ans = 0;
        int temp = 1;
        for (int i=0; i<s.size(); i++) {
            temp = s[i] - 'a' + 1;
            if (temp > ans) ans = temp;
        }
        cout << ans << '\n';
    }
    return 0;
}