#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	string st, ans = "yes";
	cin >> st;
	vector<char> stack;

	for (int i = 0; i < st.length(); i++)
	{
		if (st[i] == '[' || st[i] == '(' || st[i] == '{')
			stack.push_back(st[i]);
		else {
			if (stack.empty()){
				ans = "no";
				break;
			}
			char p = stack.back();
			stack.pop_back();
			if (p == '('){
				if (st[i] != ')')
					ans = "no";
			}

			else if (p == '['){
				if (st[i] != ']')
					ans = "no";
			}

			else if (p == '{'){
				if (st[i] != '}')
					ans = "no";
			}
		}
	}

	if (!stack.empty())
		ans = "no";

	cout << ans << endl;
	return 0;
}