#include <bits/stdc++.h>
#define ll long long 
#define ul unsigned long long 
#define ld long double 
#define fl(i,start,end) for(ll i=start;i<end;i++)
#define M 1000000007
#define endl '\n' 
using namespace std; 

void solve() {
    ll n,k; cin >> n >> k;
    if(n == 1) cout << k << endl;
    else {
        ll po = log2(k);
        if(pow(2, po) == k) cout << k - 1 << " " << 1 << " ";
        else cout << (ll) pow(2, po) - 1 << " " << k - (ll)pow(2, po) + 1<< " " ;
        n -= 2;
        while(n--) cout << "0 ";
        cout << endl;
    }
}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int _t; cin >> _t; while(_t--) 
        solve();
    return 0;
}