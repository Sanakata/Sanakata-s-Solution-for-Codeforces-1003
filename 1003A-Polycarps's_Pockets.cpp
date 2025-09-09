#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int n, c[101] = {0}, ans = 0; cin >> n;
    for(int i = 0; i < n; i++){
        int a; cin >> a;
        ans = max(ans, ++c[a]);
    }
    cout << ans << "\n";
}
