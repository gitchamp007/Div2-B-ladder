#include <bits/stdc++.h>
#define ll long long 
#define ul unsigned long long 
#define ld long double 
#define fl(i,start,end) for(ll i=start;i<end;i++)
#define M 1000000007
#define endl '\n' 
using namespace std; 

void solve() {
    ll n,m; cin >> n >> m;
    int steps[m];
    for(int i = 0; i < m; i++) cin >> steps[i];
    sort(steps, steps + m);

    if(steps[0] == 1 || steps[m-1] == n) {
        cout << "NO\n";
        return;
    } else {
        for(int i = 0; i < m - 2; i++){ 
            if(steps[i+2]  - steps[i] == 2) {
                cout << "NO";
                return;
            }
        }
    }
    cout << "YES\n";
}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    // int _t; cin >> _t; while(_t--) 
        solve();
    return 0;
}