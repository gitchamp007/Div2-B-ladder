#include <bits/stdc++.h>
#define ll long long 
#define ul unsigned long long 
#define ld long double 
#define M 1e9 + 7
#define endl '\n' 
using namespace std; 

void solve() {
    ll x, n,ans = 0;; cin >> x >> n;
    for(ll i = 1; i * i<= x; i++){
        if(x%i == 0){
            if(x/i >= n) ans = max(ans , i);
            if(i >= n) ans = max(ans, x/i);
        }
    }
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int _t; cin >> _t; while(_t--) 
        solve();
    return 0;
}