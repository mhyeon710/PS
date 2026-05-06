#include <bits/stdc++.h>
#define fio() cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int N, M;
    cin >> N >> M;

    int cnt = 0;

    for (int i = 0; i < N; i++) {
        vector<int> v; 
        
        for (int j = 0; j < M; j++) {
            int x;
            cin >> x;

            if (x == 0) {
                v.clear();
            } else {
                bool ex = false;
                for (int color : v) {
                    if (color == x) {
                        ex = true;
                        break;
                    }
                }

                if (ex) {
                    while (v.back() != x) {
                        v.pop_back();
                    }
                } else {
                    v.push_back(x);
                    cnt++;
                }
            }
        }
    }

    cout << cnt;
    return 0;
}