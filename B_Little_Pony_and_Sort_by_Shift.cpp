#include <bits/stdc++.h>
#define ll long long 
#define ul unsigned long long 
#define ld long double 
#define fl(i,start,end) for(ll i=start;i<end;i++)
#define M 1000000007
#define endl '\n' 
using namespace std; 

void solve() {
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];

    int ans = n - 1, flag = 0;

    for(int i = 0; i < n-1; i++) {
        if(a[i+1] < a[i]) {
            flag++;
            ans = i;
        }
    }
    if(flag == 1 && a[0] >= a[n-1] || flag == 0) cout << n - 1 - ans << endl;
    else cout << -1;
}
signed main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    // int _t; cin >> _t; while(_t--) 
        solve();
    return 0;
}