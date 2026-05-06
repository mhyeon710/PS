#include <iostream>
#include <algorithm>
#include <string>
#define fio() cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;
 
int s[200001];
int main() {
    fio();
    for (int i=1; i<=200000; i++) {
        int temp = i;
        int plus = 0;
        while (temp) {
            plus += (temp%10);
            temp /= 10;
        }
        s[i] = s[i-1] + plus;
    }
    int T; cin >> T;
    while (T--) {
        int N; cin >> N;
        cout << s[N] << '\n';
    }
    return 0;
}