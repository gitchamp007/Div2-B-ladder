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
    string s; cin >> s;
    int ans = 0;
    for(int i = 0; i < n - 1; i++) if(s[i] != s[i+1]) ans++;
    if(s[0] == '0') ans--;
    cout << max(0, ans) << endl;
} 

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int _t; cin >> _t; while(_t--) 
        solve();
    return 0;
}