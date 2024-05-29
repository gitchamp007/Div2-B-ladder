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
    vector < pair<int, int> > teams_rel;
    map <int, int> count;
    fl(i,0,n) {
        int a,b; cin >> a >> b;
        teams_rel.emplace_back(make_pair(a,b));
        count[a]++;
    }
    vector < int > ans_home(n, n - 1);
    for(int i = 0; i < n; i++) {
        ans_home[i] += count[teams_rel[i].second];
    }
    for(int i = 0; i < n; i++) cout << ans_home[i] << " " << 2*n - 2 - ans_home[i] << endl;
}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    // int _t; cin >> _t; while(_t--) 
        solve();
    return 0;
}