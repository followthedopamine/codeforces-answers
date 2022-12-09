#include <iostream>

using namespace std;

int main() {
  string temp;
  string input;
  string allInput;
  // This probably isn't the right way to get input but it works \o/
  while (cin >> allInput) {
  }
  for (int i = 0; i < allInput.size(); i++) {
    input = allInput[i];
    if (temp.size() == 0) {
      if (input[0] == '.') {
        cout << 0;
        continue;
      }
      temp += input[0];
    } else {
      if (input[0] == '.') {
        cout << 1;
      } else {
        cout << 2;
      }
      temp = "";
    }
  }
}