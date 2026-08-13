#include <iostream>
#include <string>
using namespace std;
 
int main() {
    int T; cin >> T;
    while (T--) {
        int N;
        char c;
        string s;
        cin >> N >> c >> s;
        
        if (c == 'g') {
            cout << "0\n";
            continue;
        }
 
        s+=s;
        int ans = 0;
        int newcheck = -1;
        for (int i=0; i<N; i++) {
            if (s[i] != c) continue;
            if (i<=newcheck) continue;
            
            for (int j=i+1; j<2*N; j++) {
                if (s[j] == 'g') {
                    if (j-i > ans)
                        ans = j-i;
                    newcheck = j;
                    break;
                }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}