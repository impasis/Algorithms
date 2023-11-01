#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int minn(int x, int y, int z)
{
	vector<int> lst = { x, y, z };
	sort(lst.begin(), lst.end());
	return lst[0];
}

int main()
{
	int n;
	cin >> n;
	vector<int> al(n + 1, 0);
	vector<int> bl(n + 1, 0);
	vector<int> cl(n + 1, 0);

	for (int i = 1; i <= n; i++){
		int a, b, c;
		cin >> a >> b >> c;
		al[i] = a;
		bl[i] = b;
		cl[i] = c;
	}

	vector<int> lst(n + 1, 0);
	lst[1] = al[1];
	if (n > 1)
		lst[2] = min(al[1] + al[2], bl[1]);

	for (int i = 3; i <= n; i++){
		lst[i] = minn(lst[i - 1] + al[i], lst[i - 2] + bl[i - 1], lst[i - 3] + cl[i - 2]);
	}

	cout << lst[n] << endl;
	return 0;
}