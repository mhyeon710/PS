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
        
        long long sum = 0;
        for (int i=0; i<N; i++) {
            int x; cin >> x;
            sum += x;
        }
 
        long long left = 1;
        long long right = 15000000;
        long long mid;
        for (int i=0; i<25; i++) {
            mid = (left + right) / 2;
            long long sq = mid * mid;
            if (sq == sum) break;
            if (sq > sum) right = mid-1;
            else left = mid+1;
        }
 
        if (mid * mid == sum) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
