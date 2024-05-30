#include <bits/stdc++.h>
#define ll long long 
#define ul unsigned long long 
#define ld long double 
#define fl(i,start,end) for(ll i=start;i<end;i++)
#define M 1000000007
#define endl '\n' 
using namespace std; 

void solve() {
    int a[3][3];
    for(int i =0; i < 3; i++) for(int j  = 0; j < 3; j++) cin >> a[i][j];
    int s1 = a[0][2] + a[0][1], s2 = a[1][0] + a[1][2], s3 = a[2][1] + a[2][0];
    a[0][0] = (s2 + s3 - s1)/2 , a[1][1] = (s1 + s3 - s2)/2 , a[2][2] = (s2 + s1 - s3)/2;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) cout << a[i][j] << " ";
        cout << endl;
    }
}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    // int _t; cin >> _t; while(_t--) 
        solve();
    return 0;
}