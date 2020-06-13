#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (n) ; i++)
#define rrep(i,n) for(int i = n-1; i >= 0 ; i--)
typedef long long ll;
typedef unsigned long long ULL;
constexpr auto INFI = 2147483647;
const ll INFL = 9223372036854775807;

int main(){
    const ULL MAX = 1000000000000000000;
    int n;
    ULL tmp;
    cin >> n;
    ULL ans = 1;
    rep(i,n) {
        cin >> tmp;
        if (tmp == 0) {
            cout << 0 << endl;
            return 0;
            }

        if (log10(tmp) + log10(ans) > 18) ans = MAX + 1;
        else {
            ans *= tmp;
        }
    }

    if (ans > MAX) {
            cout << -1 << endl;
    } else {
        cout << ans << endl;
    }
    return 0;
}