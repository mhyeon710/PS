// #include <bits/stdc++.h>
// #define ll      long long
// #define pii     pair<int, int>
// #define pll     pair<ll, ll>
// #define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
// using namespace std;

// int main() {
//     fio();
    
//     vector <char> v;
//     for (char c='a'; c<='z'; c++) {
//         string s = "";
//         s += c; s += c;
//         s += c; s += c;
//         cout << s << endl;

//         int a, b;
//         cin >> a >> b;
//         if (a || b) v.push_back(c);
//     }

//     do {
//         string s = "";
//         for (char c:v) s += c;
//         cout << s << endl;
        
//         string ans;
//         cin >> ans;

//         if (ans == "correct") break;
//         else cin >> ans;

//     } while (next_permutation(v.begin(), v.end()));
    
//     return 0;
// }

#include <bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define pll     pair<ll, ll>
#define fio()   cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(false)
using namespace std;

int main() {
    fio();
    
    vector <char> v;
    for (char c='a'; c<='z'; c++) {
        string s = "";
        s += c; s += c;
        s += c; s += c;
        cout << s << endl;

        int a, b;
        cin >> a >> b;
        if (!a && !b) continue;
        
        for (int t=0; t<a+b; t++)
            v.push_back(c); 
    }

    do {
        string s = "";
        for (char c:v) s += c;
        cout << s << endl;
        
        string ans;
        cin >> ans;

        if (ans == "correct") break;
        else cin >> ans;

    } while (next_permutation(v.begin(), v.end()));
    
    return 0;
}