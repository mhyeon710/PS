#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int N, C, P;
    cin >> N >> C >> P;
    cout << (N <= C * P ? "yes" : "no"); 
    return 0;
}