#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int N, A, B, M;
    cin >> N >> A >> B >> M;

    int cnt = 0, row = 0, maxirow = 0;
    if (A-1 <= B) cnt++, row++, maxirow++;

    int room[N+1];
    for (int i=1; i<=N; i++) room[i] = i;
    for (int t=0; t<M-1; t++) {
        map <int, int> score;
        
        int x;
        for (int i=1; i<=N; i++) { cin >> x; score[i] = x; }
        for (int i=1; i<=N; i++) { cin >> x; score[i] -= x; }
        for (int i=1; i<N; i++) {
            int sa = score[room[i]];
            int sb = score[room[i+1]];

            if ((sa>=0 && sb>=0 && sb-sa>=2) || (sa<0 && sb>=0) || (sa<0 && sb<0 && sb-sa>=4)) {
                score[room[i]] += 2;
                score[room[i+1]] -= 2;
                swap(room[i], room[i+1]);
            }
        }

        int a, b;
        for (int i=1; i<=N; i++) {
            if (room[i] == 1) a = i;
            if (room[i] == A) b = i;
        }
        
        if (abs(a-b)<=B) {
            cnt++;
            row++;
        } else {
            maxirow = max(row, maxirow);
            row = 0;
        }
    }
    maxirow = max(row, maxirow);

    cout << cnt << ' ' << maxirow;
    return 0;
}