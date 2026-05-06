#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    cin.tie(NULL), cout.tie(0);
    ios_base::sync_with_stdio(false);

    string s;
    cin >> s;
    
    vector <int> x, y;
    for (int i=0; i<s.size()-1; i++) {
        if (s[i] == '(' && s[i+1] == '(') x.push_back(i);
        if (s[i] == ')' && s[i+1] == ')') y.push_back(i);
    }

    int j = 0, ans = 0;
    for (int i=0; i<x.size(); i++) {
        if (j == y.size()) continue;
        while (j < y.size() && x[i] > y[j]) j++;
        ans += y.size()-j;
    }

    cout << ans;
    return 0;
}