#include <iostream>
#include <algorithm>
#define fio() cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;
 
long long arr[100];
int main() {
    fio();
    int T; cin >> T;
    while (T--) {
        int N; cin >> N;
        for (int i=0; i<N; i++) cin >> arr[i];
        
        long long ans = arr[0];
        for (int i=1; i<N; i++) {
            if (ans < arr[i]) {
                ans = arr[i];
                continue;
            }
            long long temp = arr[i];
            while (ans >= temp) {
                temp += arr[i];
            }
            ans = temp;
        }
        cout << ans << '\n';
    }
    return 0;
}