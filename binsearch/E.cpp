#include <iostream>

using namespace std;
typedef long long ll;


bool check(ll m, ll w, ll h, ll n)
{
	return ((m / w) * (m / h) >= n);
}

ll binary_search(ll w, ll h, ll n)
{
	ll l = 0;
	ll r = n * h;

	while (r - l > 1){
		ll m = l + (r - l) / 2;

		if (check(m, w, h, n))
			r = m;
		else
			l = m;
	}
	return r;
}

int main()
{
    ll w, h, n;
    cin >> w >> h >> n;
    ll res = binary_search(w, h, n);
    printf("%lld\n", res);
    return 0;
}