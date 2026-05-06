#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int arr[6] = {1, 1, 2, 2, 2, 8};
int main() {
    fio();

    vector <int> v(6);
    for (int i=0; i<6; i++) {
        cin >> v[i];
    }

    for (int i=0; i<6; i++) {
        cout << arr[i] - v[i] << ' ';
    }
    
    return 0;
}