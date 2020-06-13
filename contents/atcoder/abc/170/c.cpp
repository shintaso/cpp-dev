#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (n) ; i++)
#define rrep(i,n) for(int i = n-1; i >= 0 ; i--)
typedef long long ll;
constexpr auto INFI = 2147483647;
const ll INFL = 9223372036854775807;

int main(){
    ll a;
    string b;
    cin >> a >> b;
    b.erase(b.find('.'), 1);
    int b_int = atoi(b.c_str());
    cout << ((a * b_int)/100) << endl;

  return 0;
}