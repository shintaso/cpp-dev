#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (n) ; i++)
#define rrep(i,n) for(int i = n-1; i >= 0 ; i--)
typedef long long ll;
constexpr auto INFI = 2147483647;
const ll INFL = 9223372036854775807;

int main(){
    int a, b, a_v, b_w, t;
    cin >> a >> a_v >> b >> b_w >> t;
    double dist = abs(a - b);
    double diff = a_v - b_w;
    bool ans = false;
    int sec = 0;
    if (dist == 0) {
        ans = true;
    } else if (diff <= 0) {
        ans = false;
    } else {
        ans = (dist/diff <= t);
    }
    cout << ((ans) ? "YES" : "NO") << endl;;
  return 0;
}