#include <iostream>
#include <string>

using namespace std;

bool f(char sym)
{
	string syms = ".,!? ";
	for (int i = 0; i < 5; i++)
		if (sym == syms[i]) return true;
	return false;
}

int main()
{
	string st, nw = "";
	getline(cin, st);
	st += "  ";
	int ans = 0;

	for (int i = 0; i < st.length() - 1; i++){
		if (f(st[i]) && nw != ""){
			ans++;
			nw = "";
		}

		else if (!f(st[i])){
			if (st[i] == '-' && (!f(st[i + 1])) && nw != "" || st[i] != '-')
				nw += st[i];
		}
	}

	cout << ans << endl;
	return 0;
}