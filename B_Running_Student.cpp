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
    double vb, vs; cin >> vb >> vs;
    ll a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    ll ux, uy; cin >> ux >> uy;
    ll ans = 0;
    double mint = 10000000000000, mind = 100000000000;
    for(int i = 1; i < n; i++) {
        double dist = sqrt((ux - a[i])*(ux - a[i]) + uy*uy);
        double tempt = a[i] / vb + dist/vs;
        if(tempt < mint) {
            mint = tempt;
            mind = dist;
            ans = i + 1;
        } else if(tempt == mint && dist < mind) {
            mind = dist;
            ans = i + 1;
        }
    }
    cout << ans << endl;
}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    // int _t; cin >> _t; while(_t--) 
        solve();
    return 0;
}