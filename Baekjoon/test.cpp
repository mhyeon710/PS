#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

ll Answer;

int main(int argc, char** argv)
{
    cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
    
	int T, test_case;
	cin >> T;

	for(test_case = 0; test_case  < T; test_case++)
	{

		Answer = 0;
		/////////////////////////////////////////////////////////////////////////////////////////////
	    string s; cin >> s;
        int ssize = s.size();

        ll first = 1;
        for (int i = 1; i<ssize; i++) {
            first = (first * 3) % MOD;
        }
        first = (first - 1 + MOD) % MOD;

        ll second = 1;
        if (s[0] == '1' || s[0] == '2') {
            bool check = 0;
            for (int i=0; i<ssize; i++) {
                ll x = s[i] - '0';

                if (check) {
                    x = 3;
                } else {
                    if (i == 0 && x >= 3) {
                        x = 2; check = 1;
                    } else if (i == 0 && x < 3) {
                        x = 1;
                    } else if (i != 0 && x >= 3) {
                        x = 3; check = 1;
                    } else if (i != 0 && x < 3) {
                        x = s[i] - '0' + 1;
                    }
                }

                second = (second * x) % MOD;
            }

            ll temp = 1;
            if (s[0] == '2') {
                ll temp = 1;
                for (int i=1; i<ssize; i++) {
                    temp = (temp * 3) % MOD;
                }
                second = (second + temp) % MOD;
            }
        } else {
            ll second = 2;
            for (int i=1; i<ssize; i++) {
                second = (second * 3) % MOD;
            }
        }
        
        Answer = (first + second) % MOD;
		/////////////////////////////////////////////////////////////////////////////////////////////
		
		// Print the answer to standard output(screen).
		cout << "Case #" << test_case+1 << endl;
		cout << Answer << endl;
	}

	return 0;//Your program should return 0 on normal termination.
}