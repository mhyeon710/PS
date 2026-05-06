#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int cnt[100001], arr[200001];
int main() {
    fio();
    int N, K;
    cin >> N >> K;

    for (int i=0; i<N; i++) {
        cin >> arr[i];
    }

    int l = 0, maxi = 0;
    for (int i=0; i<N; i++) {
        cnt[arr[i]]++;
        if (cnt[arr[i]] > K) {
            while (l <= i && l < N) {
                cnt[arr[l]]--;
                l++;
                if (cnt[arr[i]] <= K) {
                    break;
                }
            }
        }
        // cout << i-l+1 << ' ';
        maxi = max(maxi, i-l+1);
    }

    cout << maxi;
    return 0;
}