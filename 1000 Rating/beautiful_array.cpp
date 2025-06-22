#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rep(i, a, b) for(int i = a; i < b; i++)

void solve() {
    ll n, b, k, s;
    cin >> n >> k >> b >> s;

    ll val = s / k;

    if(n == 1){
        if(val == b){
            cout << s << endl;
        }else cout << -1 << endl;
        return;
    }

    if(val < b){
        cout << -1 << endl;
        return;
    }

    if(val == b){
        if(b == 0){
            for(int i = 0; i < n; i++){
                cout << 0 << " ";
            }
            cout << endl;
            return;
        }
        for(ll i = 0; i < n - 1; i++){
            cout << 0 << " ";
        }
        cout << s << endl;
        return;
    }

    ll temp = (k * b) + 1;
    ll needed = (s - temp) / (k - 1);

    if(needed <= n - 1){
        for(ll i = 0; i < (n - 1) - needed; i++){
            cout << 0 << " ";
        }
        for(ll i = 0; i < needed; i++){
            cout << k - 1 << " ";
        }
        cout << temp << endl;
    }else cout << -1 << endl;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
    
    return 0;
}