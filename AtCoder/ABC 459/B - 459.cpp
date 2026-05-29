#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <string>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

pii arr[10];
int main() {
    fio();
    int N; cin >> N;

    arr[2] = {0, 2};
    arr[3] = {3, 5};
    arr[4] = {6, 8};
    arr[5] = {9, 11};
    arr[6] = {12, 14};
    arr[7] = {15, 18};
    arr[8] = {19, 21};
    arr[9] = {22, 25};

    for (int i=0; i<N; i++) {
        string s; cin >> s;

        for (int j=2; j<=9; j++) {
            auto [a, e] = arr[j];

            if ('a' + a <= s[0] && s[0] <= 'a' + e) {
                cout << j;
                break;
            }
        }
    }
    
    return 0;
}