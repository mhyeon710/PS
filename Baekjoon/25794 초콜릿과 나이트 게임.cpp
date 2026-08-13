#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    int X, Y;
    cin >> X >> Y;

    int nx = 0 , ny = 0;
    if (X == Y || X == 0 || Y == 0) {
        cout << 7 << '\n';
        
        if (X == 0 || Y == 0) {
            int dis = (X == 0 ? Y : X);
            ny += dis; cout << nx << ' ' << ny << '\n';
            nx += dis; cout << nx << ' ' << ny << '\n';
            nx += dis; cout << nx << ' ' << ny << '\n';
            ny -= dis; cout << nx << ' ' << ny << '\n';
            ny -= dis; cout << nx << ' ' << ny << '\n';
            nx -= dis; cout << nx << ' ' << ny << '\n';
            ny += dis; cout << nx << ' ' << ny << '\n';
        } else {
            nx += X; ny += X; cout << nx << ' ' << ny << '\n';
            nx += X; ny -= X; cout << nx << ' ' << ny << '\n';
            nx += X; ny -= X; cout << nx << ' ' << ny << '\n';
            nx -= X; ny -= X; cout << nx << ' ' << ny << '\n';
            nx -= X; ny -= X; cout << nx << ' ' << ny << '\n';
            nx -= X; ny += X; cout << nx << ' ' << ny << '\n';
            nx += X; ny += X; cout << nx << ' ' << ny << '\n';
        }
    } else {
        cout << 15 << '\n';

        nx -= X; ny += Y; cout << nx << ' ' << ny << '\n';
        nx += X; ny += Y; cout << nx << ' ' << ny << '\n';
        nx += X; ny += Y; cout << nx << ' ' << ny << '\n';
        nx += X; ny -= Y; cout << nx << ' ' << ny << '\n';
        nx += X; ny -= Y; cout << nx << ' ' << ny << '\n';
        
        nx -= X; ny -= Y; cout << nx << ' ' << ny << '\n';
        nx += Y; ny -= X; cout << nx << ' ' << ny << '\n';
        nx -= X; ny += Y; cout << nx << ' ' << ny << '\n';
        nx += Y; ny += X; cout << nx << ' ' << ny << '\n';
        nx -= Y; ny += X; cout << nx << ' ' << ny << '\n';
        
        nx -= Y; ny += X; cout << nx << ' ' << ny << '\n';
        nx -= Y; ny -= X; cout << nx << ' ' << ny << '\n';
        nx -= Y; ny -= X; cout << nx << ' ' << ny << '\n';
        nx += Y; ny -= X; cout << nx << ' ' << ny << '\n';
        nx += Y; ny += X; cout << nx << ' ' << ny << '\n';
    }
    return 0;
}