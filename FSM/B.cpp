#include <iostream>
#include <string>

using namespace std;\

int main()
{
	string st;
	getline(cin, st);
	int ans = 0;

	for (int i = 0; i < st.length(); i++){
		if (st[i] == ':' || st[i] == ';'){
			int j = i + 1;
			while (j < st.length() && st[j] == '-')
				j++;

			if (j < st.length()){
				if (st[j] == '(' || st[j] == ')' || st[j] == '[' || st[j] == ']'){
					ans++;
					i = j;
				}
			}
		}
	}

	cout << ans << endl;
	return 0;
}