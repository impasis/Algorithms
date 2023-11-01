#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n = 5;
	vector<int> ps_1(n), ps_2(n);
	for (int i = 0; i < n; i++)
		cin >> ps_1[i];
	for (int i = 0; i < n; i++)
		cin >> ps_2[i];

	int ans = 0;
	bool flag = true;

	while (ps_1.size() > 0 && ps_2.size() > 0){
		ans++;
		int x = ps_1.front();
		int y = ps_2.front();
		ps_1.erase(ps_1.begin());
		ps_2.erase(ps_2.begin());

		if (ans >= 1000000){
			cout << "botva" << endl;
			flag = false;
			break;
		}

		else if (x > y && y != 0 && x != 9 || x == 0 && y == 9 || y < x && x < 9 && y == 0 || x > y && x == 9 && y > 0){
			ps_1.push_back(x);
			ps_1.push_back(y);
		}

		else if (y > x && x != 0 && y != 9 || y == 0 && x == 9 || y > x && y < 9 && x == 0 || y > x && y == 9 && x > 0){
			ps_2.push_back(x);
			ps_2.push_back(y);
		}
	}

	if (flag) {
		if (ps_2.size() == 0)
			cout << "first " << ans << endl;
		else
			cout << "second " << ans << endl;
	}
	return 0;
}



/*
    elif x > y != 0 and x != 9 or x == 0 and y == 9 or y < x < 9 and y == 0 or x > y and x == 9 and y > 0:
        ps_1.extend([x, y])
    elif y > x != 0 and y != 9 or y == 0 and x == 9 or y > x and y < 9 and x == 0 or y > x and y == 9 and x > 0:
        ps_2.extend([x, y])

if flag:
    if len(ps_2) == 0:
        print('first', ans)
    else:
        print('second', ans)
*/