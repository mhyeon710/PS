#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;
 
string s;
set <int> visited;
vector <int> v;
int arr[200001], ans[200001], N, cnt;
void dfs(int i) {
    if (visited.find(i) == visited.end()) {
        visited.insert(i);
        v.push_back(i);
        if (s[i-1] == '0') cnt++;
        dfs(arr[i]);
    }
    else {
        for (auto x:v) {
            ans[x] = cnt;
        }
        v.clear();
        cnt = 0;
    }
}
 
int main() {
    fio();
    int T; cin >> T;
    while (T--) {
        cin >> N;
        
        for (int i=1; i<=N; i++)
            cin >> arr[i];
 
        cin >> s;
        
        visited.clear();
        for (int i=1; i<=N; i++) {
            if (visited.find(i) == visited.end()) {
                dfs(i);
            }
        }
 
        for (int i=1; i<=N; i++) {
            cout << ans[i] << ' ';
        }
        cout << '\n';
    }
    return 0;
}