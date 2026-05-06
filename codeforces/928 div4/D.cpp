#include <iostream>
#include <algorithm>
#include <vector>
#define fio() cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;
 
int main() {
    fio();
    int T; cin >> T;
    while (T--) {
        int N; cin >> N;
 
        vector <long long> v;
        for (int i=0; i<N; i++) {
            long long x; cin >> x;
            v.push_back(x);
        }
 
        sort(v.begin(), v.end());
 
        int left = 0;
        int right = v.size()-1;
        int ans = N;
        while (left < right) {
            if (v[left] + v[right] == ((1<<31) - 1)) {
                ans--;
                left++;
                right--;
            }
            else if (v[left] + v[right] > ((1<<31) - 1)) right--;
            else if (v[left] + v[right] < ((1<<31) - 1)) left++;
        }
        cout << ans << '\n';
    }
    return 0;
}