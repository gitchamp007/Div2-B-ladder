#include <bits/stdc++.h>
#define ll long long 
#define ul unsigned long long 
#define ld long double 
#define fl(i,start,end) for(ll i=start;i<end;i++)
#define M 1000000007
#define endl '\n' 
using namespace std; 

void solve() {
    int n, d, l; cin >> n >> d >> l;
    vector <ll> ans;

    for(int i = 0; i < n; i++) {
        if(i != n - 1) {
            if(d <= 0) {
                ans.push_back(1);
                d = 1 - d;
            } else if(d > 0) {
                ans.push_back(l);
                d = l - d;
            }
        } else {
            if(d > 0 && d <= l) ans.push_back(d);
            else {
                cout << -1;
                return;
            }
        }
    }
    for(int i = 0; i < n; i++) cout << ans[i] << " " ;
}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    // int _t; cin >> _t; while(_t--) 
        solve();
    return 0;
}