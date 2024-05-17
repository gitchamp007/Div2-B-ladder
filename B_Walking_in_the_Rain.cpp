#include <bits/stdc++.h>
#define ll long long 
#define ul unsigned long long 
#define ld long double 
#define M 1000000007
#define endl '\n' 
using namespace std; 

void solve() {
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];

    int ans = a[0];
    for(int k = 1; k < 1001; k++) {
        int flag = 1;
        for(int i = 0; i < n ; i++) {
            if(i == 0 || i == n-1) {
                if(a[i] < k) flag = 0;
            }
            else if(a[i] < k && a[i+1] < k) flag = 0;
        }
        if(flag) ans = k;
    }
    cout << ans;
}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    // int _t; cin >> _t; while(_t--) 
        solve();
    return 0;
}