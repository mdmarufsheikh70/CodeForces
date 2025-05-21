#include <bits/stdc++.h>
using namespace std;


#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
  optimize();
  string s;
  cin >> s;

  vector<char> numbers;

  for (auto ch : s) {
    if (ch != '+')
    {
      numbers.push_back(ch);
    }
  }

  sort(numbers.begin(), numbers.end());

  for (int i = 0; i < numbers.size(); i++) {
    cout << numbers[i];
    if (i != numbers.size() - 1) {
      cout << "+";
    }
  }
  cout << endl;
  return 0;
}