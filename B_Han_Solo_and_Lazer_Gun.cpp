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
    double x0, y0; cin >> x0 >> y0;
    map <double, int> mp;
    for(int i = 0; i < n; i++) {
        double x,y; cin >> x >> y;
        if(x == x0) mp[1000000000.0]++;
        else {
            double slope = (y - y0)/ (x - x0);
            mp[slope]++;
        }
    }
    cout << mp.size();
}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    // int _t; cin >> _t; while(_t--) 
        solve();
    return 0;
}