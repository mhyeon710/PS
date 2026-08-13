#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

vector <vector<string>> v(12);

int main() {
    cin.tie(0), cout.tie(0);
    ios_base::sync_with_stdio(false);

    int N;
    cin >> N;
    cin.ignore();
    
    for (int i=0; i<N; i++) { 
        string s;
        getline(cin, s);
        
        string day;
        int time;
        cin >> day >> time;
        cin.ignore();

        int d;
        if (day == "Tuesday")  d = 0;
        if (day == "Thursday") d = 1;
        if (day == "Saturday") d = 2;

        time = 3*(time-1) + d;

        stringstream ss(s); 
        string temp;
        string line = "";

        while (ss >> temp) {
            if (line == "") {
                line = temp; 
            } 
            else if (line.length() + 1 + temp.length() <= 10) {
                line += " " + temp;
            } 
            else {
                v[time].push_back(line);
                line = temp;
            }
        }
        if (line != "") {
            v[time].push_back(line);
        }
    }

    for (int i=0; i<4; i++) {
        cout << "+----------+----------+----------+\n";
        
        int maxi = max(max(v[3*i].size(), v[3*i+1].size()), v[3*i+2].size());
        if (maxi == 0) maxi = 1;
        for (int t=0; t<maxi; t++) {
            cout << "|";
            for (int j=0; j<3; j++) {
                int idx = i*3+j;
                if (t >= v[idx].size()) {
                    cout << "          ";
                }
                else {
                    cout << v[idx][t];
                    for (int a=v[idx][t].size(); a<10; a++) cout << ' ';
                }
                cout << "|";
            }
            cout << "\n";
        }
    }
    cout << "+----------+----------+----------+\n";
    return 0;
}