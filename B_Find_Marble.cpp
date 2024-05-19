#include <bits/stdc++.h>
#define ll long long 
#define ul unsigned long long 
#define ld long double 
#define fl(i,start,end) for(ll i=start;i<end;i++)
#define M 1000000007
#define endl '\n' 
using namespace std; 

void solve() {
    int n,s,t; cin >> n >> s >> t;
    int per[n];
    for(int i = 0; i < n; i++) cin >> per[i], per[i]--;

    s--; t--;
    for(int i = 0; i <= n; i++) {
        if(s == t) {
            cout << i;
            return;
        }
        s = per[s];
    }
    cout << -1;
}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    // int _t; cin >> _t; while(_t--) 
        solve();
    return 0;
}