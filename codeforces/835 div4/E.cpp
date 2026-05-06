#include <iostream>
#include <algorithm>
using namespace std;
 
void fio() { cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(false); }
 
long long arr[200000];
long long sol[200000];
int main() {
    fio();
    int T; cin >> T;
    while (T--) {
        int N; cin >> N;
        int cnt = 0;
        for (int i=0; i<N; i++) {
            int x; cin >> x;
            if (!x) cnt++;
            arr[i] = x;
            sol[i] = 0;
        }
        if (cnt == 0 || cnt == N) {
            cout << N-1 << '\n';
        }
        else {
            cnt = 0;
            for (int i=N-2; i>=0; i--) {
                if (!arr[i+1]) cnt++;
                sol[i] = cnt;
            }
 
            long long ans = 0;
            for (int i=0; i<N; i++) {
                if (arr[i]) ans += sol[i];
            }
 
            long long ans1 = 0;
            bool check = false;
            for (int i=0; i<N; i++) {
                if (arr[i] == 0 && check == false) {
                    check = true;
                    ans1 += sol[i];
                }
                if (arr[i] == 1 && check == false) {
                    ans1 += sol[i]-1;
                }
                if (arr[i] == 1 && check == true) {
                    ans1 += sol[i];
                }
                //cout << ans1 << ' ';
            }
            //cout << '\n';
            long long ans2 = 0;
            check = false;
            for (int i=N-1; i>=0; i--) {
                if (arr[i] == 1 && check == false) {
                    check = true;
                    continue;
                }
                if (arr[i] == 1 && check == true) {
                    ans2 += sol[i]+1;
                }
                //cout << ans2 << ' ';
            }
            //cout << '\n';
            ans = max(ans, ans1);
            ans = max(ans, ans2);
            cout << ans << '\n';
        }
    }
    return 0;
}