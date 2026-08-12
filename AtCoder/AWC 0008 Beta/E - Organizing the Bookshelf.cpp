#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

ll cnt;
int arr[200000], temp[200000];

void counting_inversion(int s, int e) {
    if (s >= e) return;

    int m = (s+e) / 2;
    counting_inversion(s, m);
    counting_inversion(m+1, e);

    int i = s, j = m+1;

    int k = s;
    while (i <= m && j <= e) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
            cnt += m-i+1;
        }
    }

    while (i <= m) temp[k++] = arr[i++];
    while (j <= e) temp[k++] = arr[j++];

    for (int x=s; x<=e; x++) arr[x] = temp[x];
}

int main() {
    fio();
    int N;
    cin >> N;

    for (int i=0; i<N; i++) {
        cin >> arr[i];
    }

    counting_inversion(0, N-1);

    cout << cnt;
    return 0;
}