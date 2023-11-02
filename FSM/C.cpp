#include <iostream>
#include <cctype>

using namespace std;

bool check(string word) {
    if (word.empty()) {
        return false;
    }
    if (!(isalpha(word[0]) || word[0] == '_')) {
        return false;
    }
    for (char el : word.substr(1)) {
        if (!(isalnum(el) || el == '_')) {
            return false;
        }
    }
    return true;
}

int main() {
    string st;
    getline(cin, st);

    string new_str;
    int cnt = 0;

    for (char el : st) {
        if (isalnum(el) || el == '_')
            new_str += el;
        else {
            if (check(new_str))
                cnt++;
            new_str = "";
        }
    }

    if (check(new_str)) 
        cnt++;

    cout << cnt << endl;
    return 0;
}
