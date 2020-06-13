#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (n) ; i++)
#define rrep(i,n) for(int i = n-1; i >= 0 ; i--)
typedef long long ll;
constexpr auto INFI = 2147483647;
const ll INFL = 9223372036854775807;

int main(){

    int n, k;
    cin >> n >> k;
    vector<int> light_vec(n,0), light_count(n,0);
    rep(i,n) cin >> light_vec[i];

    rep(i,k) {
        fill(light_count.begin(), light_count.end(), 0);
        rep(j,n) {
            for(int k = max(j-light_vec[j], 0); k<min(j + light_vec[j] + 1, n); k++){
                light_count[k]++;
            }
        }
        light_vec = light_count;
    }

    rep(i,n){
        if (i) cout << " ";
        cout << light_vec[i];
    }
    cout << endl;

  return 0;
}