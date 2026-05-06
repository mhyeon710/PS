#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
 
void fio() { cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(false); }
 
int main() {
    fio();
    int T; cin >> T;
    while (T--) {
        for (int i=0; i<3; i++) {
            string s; cin >> s;
            sort(s.begin(), s.end());
            if (s[0] == '?') {
                if (s[1] == 'A' && s[2] == 'B') cout << "C\n";
                else if (s[1] == 'A' && s[2] == 'C') cout << "B\n";
                else cout << "A\n";
            }
        }
    }
    return 0;
}