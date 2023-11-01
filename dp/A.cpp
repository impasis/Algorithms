#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> ans(n + 1);
	ans[0] = 1;
	ans[1] = 1;

	for (int i = 2; i < n; i++)
		ans[i] = ans[i - 1] + ans[i - 2];

	cout << ans[n - 1] << endl;
	return 0;
}