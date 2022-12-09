// https://codeforces.com/problemset/problem/266/B

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  int arrayLength;
  int seconds;
  cin >> arrayLength >> seconds;
  string line = "";
  for (int i = 0; i < arrayLength; i++) {
    string gender;
    cin >> gender;
    line += gender;
  }
  for (int j = 0; j < seconds; j++) {
    for (int i = 0; i < line.size() - 1; i++) {
      if (line[i] == 'B' && line[i + 1] == 'G') {
        iter_swap(line.begin() + i, line.begin() + i + 1);
        i++;
      }
    }
  }
  cout << line;
}