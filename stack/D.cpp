#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
      string st, ne = "";
      vector<string> lst;
      getline(cin, st);

      for (int i = 0; i < st.length(); i++){
            if (st[i] == ' '){
                  lst.push_back(ne);
                  ne = "";
            }
            else
                  ne += st[i];
      }
      lst.push_back(ne);

      /*for (int i = 0; i < lst.size(); i++)
            cout << lst[i] << " ";*/

      vector<int> stack;

      for (int i = 0; i < lst.size(); i++){
            if (lst[i] == "+"){
                  int l = stack.back();
                  stack.pop_back();
                  int r = stack.back();
                  stack.pop_back();
                  int res = r + l;
                  stack.push_back(res);
            }

            else if (lst[i] == "-"){
                  int l = stack.back();
                  stack.pop_back();
                  int r = stack.back();
                  stack.pop_back();
                  int res = r - l;
                  stack.push_back(res);
            }

            else if (lst[i] == "*"){
                  int l = stack.back();
                  stack.pop_back();
                  int r = stack.back();
                  stack.pop_back();
                  int res = r * l;
                  stack.push_back(res);
            }

            else {
                  stack.push_back(stoi(lst[i]));
            }
      }

      cout << stack[0] << endl;
      return 0;
}