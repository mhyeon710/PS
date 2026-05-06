#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll a, b, c;
    ll N;
    cin >> a >> b >> c >> N;


    if (N%2) {
        cout << N*c + (N/2)*b + b + a;
    } else {
        cout << N*c + (N/2)*b;
        
    }

    return 0;
}