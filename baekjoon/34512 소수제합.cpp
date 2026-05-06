#include <bits/stdc++.h>
#define pii pair<int, int>
#define ll long long
#define fio() cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int N; cin >> N;

    if (N == 2) cout << -1;
    else if (N == 3) cout << "2 5 29";
    else if (N == 4) cout << "2 2 3 17";
    else if (N == 6) cout << "2 2 3 3 3 5";
    else if ((N-5)%2 == 0) {
        cout << "2 2 2 ";
        for (int i=3; i<N; i++) cout << "3 ";
    } else {
        cout << "2 2 2 2 2 2 ";
        for (int i=6; i<N; i++) cout << "3 ";
    }

    return 0;
}