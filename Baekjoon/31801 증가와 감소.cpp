#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int arr[1000001];
int main() {
    fio();

    for (int i=1; i<=1000000; i++) {
        int temp = i;
        vector <int> v;
        while (temp) {
            v.push_back(temp%10);
            temp/=10;
        }

        int ui = -1, di = v.size();
        for (int i=0; i<v.size()-1; i++) {
            if (v[i] < v[i+1]) ui = i+1;
            else break;
        }
        for (int i=v.size()-1; i>0; i--) {
            if (v[i-1] > v[i]) di = i-1;
            else break;
        }

        if (ui == di) {
            arr[i] = arr[i-1] + 1;
        }
        else arr[i] = arr[i-1];
    }

    int T; cin >> T;
    while (T--) {
        int a, b;
        cin >> a >> b;
        cout << arr[b] - arr[a-1] << '\n';
    }
    return 0;
}