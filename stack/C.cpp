#include <iostream>
#include <vector>

using namespace std;

int main()
{
	string st;
	cin >> st;
	int cnt = 0;
	vector<char> stack;

	for (int i = 0; i < st.size(); i++){
		if (st[i] == '(')
			stack.push_back(st[i]);
		else {
			if (stack.size() > 0)
				stack.pop_back();
			else 
				cnt++;
		}
	}

	cout << cnt + stack.size() << endl;
	return 0;
}