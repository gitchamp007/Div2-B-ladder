#include <bits/stdc++.h>
#define ll long long 
#define ul unsigned long long 
#define ld long double 
#define fl(i,start,end) for(ll i=start;i<end;i++)
#define M 1000000007
#define endl '\n' 
using namespace std; 

void solve() {
    string s; cin >> s;
    vector <int> a(26, 0);
    for(int i = 0; i < s.size(); i++) a[(s[i] - 'a')]++;

    ll sum = 0, oc = 0;
    for(int i = 0; i < 26; i++) {
        if(a[i] & 1){
            oc++;
        }
    }
    if(oc < 2 || (oc & 1)) cout << "First";
    else cout << "Second";
}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    // int _t; cin >> _t; while(_t--) 
        solve();
    return 0;
}