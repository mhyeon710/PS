#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

pii arr[500001];
vector <int> v;
int main() {
    fio();
    int N, M;
    cin >> N >> M;

    // 모든 절에서 절댓값이 같은 숫자쌍이 존재한다면 NO
    // 아닌 절이 1개라도 있다면 해당 절 에서 양수라면 0을, 음수라면 1을 출력, 없으면 0 출력
    
    bool can = true;
    for (int i=1; i<=M; i++) {
        int k; cin >> k;

        v.clear();
        for (int j=0; j<k; j++) {
            int x; cin >> x;
            v.push_back(x);
        }
        
        for (int j=0; j<k; j++) {
            int x = v[j];
            if (x < 0) {
                if (arr[-x].second == i) {
                    can = false;
                    break;
                }
                arr[-x].first = i;
            } else {
                if (arr[x].first == i) {
                    can = false;
                    break;
                }
                arr[x].second = i;
            }
            
            
            if (j == k-1) {
                cout << "YES\n";

                vector <bool> ans(N+1, 0);
                for (auto x:v) {
                    if (x < 0) ans[-x] = 1;
                }
                for (int i=1; i<=N; i++) cout << ans[i] << ' ';
                
                return 0;
            }
        }
    }

    if (!can) cout << "NO";
    return 0;
}