#include <bits/stdc++.h>
using namespace std;

string m[101];
int dx[4] = {-1,1,0,0};
int dy[4] = {0,0,1,-1};
int main() {
    int N, M;
    cin >> N >> M;
    int ans = 0;
    for(int i=0;i<N;i++) cin >> m[i];
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            for(int k=0;k<4;k++){
                int xx = i+dx[k];
                int yy = j+dy[k];
                if(xx<0||xx>=N||yy<0||yy>=M) continue;
                if((m[xx][yy]=='X'&&m[i][j]=='Y')||(m[xx][yy]=='Y'&&m[i][j]=='X')) ans++;
            }
        }
    }
    cout << ans/2;
    return 0;
}