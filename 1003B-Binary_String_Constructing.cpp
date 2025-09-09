#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int a, b, x, s, s0, s1, mxs, mns, mxn, mnn; cin >> a >> b >> x;
    bool o = a <= b;
    s = x + 1, s1 = s / 2 + (o && s % 2 == 1 ? 1 : 0), s0 = s / 2 + (!o && s % 2 == 1 ? 1 : 0);
    mxs = max(s0, s1), mns = min(s0, s1), mxn = (max(a, b) == b ? 1 : 0), mnn = (min(a, b) == b && max(a, b) != min(a, b) ? 1 : 0);
    for(int i = 0; i < max(a, b) - mxs + 1; i++) cout << mxn;
    for(int i = 0; i < min(a, b) - mns + 1; i++) cout << mnn;
    for(int i = 2; i < s; i++) cout << (o ? (i % 2 == 0 ? 1 : 0) : (i % 2 == 0 ? 0 : 1));
}
