#include <iostream>
#include <algorithm>

using namespace std;
typedef long long ll;

bool check(ll m, ll prin1, ll prin2, ll copies) {
    return (m / prin1 + m / prin2) >= copies - 1;
}

ll binary_search(ll copies, ll prin1, ll prin2) {
    ll piv = min(prin1, prin2);
    if (copies == 1) {
        return piv;
    }

    ll l = 0;
    ll r = copies * prin1;
    while (r - l > 1) {
        ll m = (l + r) / 2;
        if (check(m, prin1, prin2, copies)) {
            r = m;
        } 
        else {
            l = m;
        }
    }
    return r + piv;    
}

int main() {
    ll n, x, y;
    cin >> n >> x >> y;
    cout << binary_search(n, x, y) << endl;
    return 0;
}
