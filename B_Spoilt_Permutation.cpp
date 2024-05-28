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
    int a[n],b[n];
    for(int i =0; i < n; i++) {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b, b + n);
    int lo = 0, hi = n - 1;
    while(a[lo] == b[lo] && lo < n) lo++;
    while(a[hi] == b[hi] && hi >= 0) hi--;

    if(lo == n) cout << "0 0";
    else {
        for(int i = lo; i <= hi; i++) {
            if(a[i] != b[hi + lo - i]) {
                cout << "0 0";
                return;
            }
        }
        cout << lo + 1 << " " << hi + 1 << endl;
    }
}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    // int _t; cin >> _t; while(_t--) 
        solve();
    return 0;
}