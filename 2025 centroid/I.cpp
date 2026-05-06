#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define fio() cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int T, TL;
pair<long double, long double> target, start;

bool sol(pair<long double, long double> st, long double k, int L){
    // cout << st.first << ' ' << st.second << ' ' << k <<' ' << L << endl;

    if(L == TL) return true;

    long double len = k / 3;

    if( target.first > st.first + len && target.first < st.first + len * 2){
        if(target.second > st.second + len && target.second < st.second + 2*len)
            return false;
        else if(target.second <= st.second + len) return sol({st.first + len, st.second}, k / 3, L+1);
        else return sol({st.first + len, st.second + len*2}, k/3, L+1);
    }
    else if(target.first <= st.first + len){
        if(target.second >= st.second + len && target.second <= st.second + 2*len) return sol({st.first, st.second + len}, k / 3, L+1);
        else if(target.second <= st.second + len) return sol({st.first, st.second}, k/3, L+1);
        else return sol({st.first, st.second + len *2}, k/3, L+1);
    }
    else {
        if(target.second >= st.second + len && target.second <= st.second + 2*len)  return sol({st.first + 2 * len, st.second + len}, k/3, L+1);
        else if(target.second <= st.second + len) return sol({st.first + 2 * len, st.second}, k/3, L+1);
        else return sol({st.first + 2 * len, st.second + 2 * len}, k/3, L++);
    }
}

int main() {
    fio();
    cin >> T;
    int L, k;
    while(T--){
        cin >>start.first >> start.second >> TL >> k >>target.first >> target.second;

        // cout << LDBL_MAX << endl;
        
        long double kk = 1;

        if (start.second == target.second) {
            cout << "same";
        }

        for(int i=0;i <k ;i++) {
            kk *= 3;
        }

        if(target.first < start.first || target.first > start.first + kk || target.second < start.second || target.second > start.second + kk){
            cout << "0" << endl;
            continue;
        }

        if(TL == 0) {
            cout << "1" << endl;
            continue;
        }
        
        cout << (sol(start, kk, 0) ? "1" : "0") << endl;
    }
    return 0;
}