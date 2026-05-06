#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <map>
#include <queue>
#include <set>
#include <string>
#include <vector>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;
 
int main() {
    fio();
    int T; cin >> T;
    while (T--) {
        int N; cin >> N;
 
        int left = 0;
        int right = 0;
        vector <int> v(N);
        for (int i=0; i<N; i++) {
            char c; cin >> c;
            v[i] = c - '0';
            if (v[i]) right++;
        }
 
        vector <int> ans;
        if (right*2 >= N) ans.push_back(0);
        for (int i=1; i<N; i++) {
            if (v[i-1]) right--;
            else left++;
 
            if (left*2 >= i) {
                if (right*2 >= N-i) {
                    ans.push_back(i);
                }
            }
        }
 
        if (ans.empty()) {
            cout << N << '\n';
            continue;
        }
 
        // for (int i=0; i<ans.size(); i++) cout << ans[i] << ' ';
        // cout << endl;
 
        int answer = ans[0];
        int temp = abs(N-2*ans[0]);
        for (int i=1; i<ans.size(); i++) {
            if (abs(N-2*ans[i]) < temp) {
                answer = ans[i];
                temp = abs(N-2*ans[i]);
            }
        }
 
        cout << answer << '\n';
    }
    return 0;
}