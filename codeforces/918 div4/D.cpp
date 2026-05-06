#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
 
void fio() { cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(false); }
 
int main() {
    fio();
    int T; cin >> T;
    while (T--) {
        int N; cin >> N;
        string s; cin >> s;
 
        int sz = s.size();
        int check = -1;
        for (int i=0; i<sz; i++) {
            if (i <= check) continue;
            if (s[i] == 'b' || s[i] == 'c' || s[i] == 'd') cout << s[i];
            else {
                if (i+2 < sz) {
                    if (s[i+2] == 'a' || s[i+2] == 'e') {
                        cout << s[i] << '.' << s[i+1];
                        check = i+1;
                        continue;
                    }
                }
                if (i+3 < sz) {
                    if (s[i+3] == 'a' || s[i+3] == 'e') {
                        cout << s[i] << s[i+1] << '.' << s[i+2];
                        check = i+2;
                        continue;
                    }
                }
                cout << s[i];
            }
        }
        cout << '\n';
    }
    return 0;
}