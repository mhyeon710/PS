#include <iostream>
#include <algorithm>
using namespace std;
 
int arr[200000];
int even[32];
int main() {
    int T; cin >> T;
    while (T--) {
        int N; cin >> N;
        int check = N;
        for (int i=0; i<N; i++)
            cin >> arr[i];
        
        for (int i=0; i<N; i++) {
            while (check>0 && arr[i]%2==0) {
                check--;
                arr[i]/=2;
            }
            if (check == 0) break;
        }
        
        if (check == 0) {
            cout << "0\n";
            continue;
        }
        
        for (int i=0; i<=31; i++)
            even[i] = 0;
 
        for (int i=2; i<=N; i+=2) {
            long long temp = 2;
            int cnt = 0;
            while (i%temp == 0) {
                temp *= 2;
                cnt++;
            }
            even[cnt]++;
        }
 
        int ans = 0;
        for (int i=31; i>=1; i--) {
            if (even[i] == 0) continue;
            while (check - i >= 0 && even[i] > 0) {
                check -= i;
                ans++;
                even[i]--;
            }
        }
        
        if (check > 0) cout << "-1\n";
        else cout << ans << '\n';
    }
    return 0;
}