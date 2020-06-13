#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (n) ; i++)
#define rrep(i,n) for(int i = n-1; i >= 0 ; i--)
typedef long long ll;
constexpr auto INFI = 2147483647;
const ll INFL = 9223372036854775807;

int main(){
    const ll MAX = pow(2,19);
    int n;
    cin >> n;

    pair<int,int> tree[MAX];
    rep(i,n) cin >> tree[i+1].first >> tree[i+1].second;

    int q, v, l;
    cin >> q;
    rep(i, q) {
        ll  bit_max = 1;
        int  count = 1;
        cin >> v >> l;
        ll nodes[20];
        nodes[0] = 1;
        while(v != 1) {
            nodes[count] = v;
            v /= 2;
            count++;
        }
        bit_max<<=count;
        int max_value = 0;
        for(int j = 0; j<bit_max; j++) {
           int sum_value = 0;
           int sum_wight = 0;
           rep(k, count) {
               if (j>>k & 1) {
                   sum_value += tree[nodes[k]].first;
                   sum_wight += tree[nodes[k]].second;
               }
           }
           if (sum_wight <= l) {
               max_value = max(sum_value, max_value);
           }
        }
        cout << max_value << endl;
    }


  return 0;
}