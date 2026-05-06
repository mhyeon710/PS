#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int x[4] = {-1, 0, 1, 0};
int y[4] = {0, 1, 0, -1};

int main() {
    fio();

    vector <pii> ckList;
    for (int i=0; i<10; i++) {
        for (int j=0; j<10; j++) {
            if (i == 0 && j == 0) continue;
            if (i == 9 && j == 9) continue;
            if (i%2==0 && j%2==0) ckList.push_back({i, j});
            if (i%2==1 && j%2==1) ckList.push_back({i, j});
        }
    }

    int recv;
    vector <pii> ans;
    for (int i=1; i<=50; i++) {
        if (i<=47) {
            auto [a, b] = ckList[i-1];
            cout << "? " << a << ' ' << b << endl;
            
            cin >> recv;
            if (recv) {
                ans.push_back({a, b});
                for (int j=0; j<4; j++) {
                    int nx = a + x[j];
                    int ny = b + y[j];
                    if (nx<0 || nx >=10 || ny<0 || ny>=10) continue;
                    cout << "? " << nx << ' ' << ny << endl;
                    
                    cin >> recv;
                    if (recv) {
                        ans.push_back({nx, ny});
                        break;
                    }
                }
            }
        }

        if (i==48) {
            auto [a, b] = ckList[i-1];
            cout << "? " << a << ' ' << b << endl;
            
            cin >> recv;
            if (recv) {
                ans.push_back({a, b});
                for (int j=0; j<2; j++) {
                    
                    int nx = a + x[j];
                    int ny = b + y[j];
                    if (nx<0 || nx >=10 || ny<0 || ny>=10) continue;

                    cout << "? " << nx << ' ' << ny << endl;

                    cin >> recv;
                    if (recv) {
                        ans.push_back({nx, ny});
                        break;
                    }
                }
                if (ans.size() == 1) ans.push_back({9, 6});
            }
        }

        if (i==49) {
            cout << "? 9 9" << endl;
            
            cin >> recv;
            if (recv) {
                ans.push_back({9, 9});
                cout << "? 8 9" << endl;

                cin >> recv;
                if (recv) ans.push_back({8, 9});
                else      ans.push_back({9, 8});
            }
        }

        if (i == 50) {
            ans.push_back({0, 0});
            cout << "? 0 1" << endl;
            
            cin >> recv;
            if (recv) ans.push_back({0, 1});
            else      ans.push_back({1, 0});
        }

        if (ans.size() == 2) break;
    }

    auto [a, b] = ans[0];
    auto [c, d] = ans[1];
    cout << "! " << a << ' ' << b << ' ' << c << ' ' << d << endl;
    return 0;
}