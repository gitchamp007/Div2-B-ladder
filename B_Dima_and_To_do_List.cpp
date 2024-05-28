#include <bits/stdc++.h>
#define ll long long 
#define ul unsigned long long 
#define ld long double 
#define fl(i,start,end) for(ll i=start;i<end;i++)
#define M 1000000007
#define endl '\n' 
using namespace std; 

void solve() {
    int n,k; cin >> n >> k;
    int a[n];
    ll ans = LONG_LONG_MAX, temp_sum = 0, pos = -1; 
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int fir = 0; fir < k; fir++) {
        temp_sum = 0;
        for(int sec = fir; sec < n; sec += k) temp_sum += a[sec];
        if(temp_sum < ans){
            ans = temp_sum;
            pos = fir;
        }
    }
    cout << pos  + 1;
}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    // int _t; cin >> _t; while(_t--) 
        solve();
    return 0;
}