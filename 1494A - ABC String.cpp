#include <bits/stdc++.h>

using namespace std;

bool solve() {
  string s;
  cin >> s;
  vector<int> d(3);
  int x = s[0] - 'A';
  int y = s.back() - 'A';
  //cout<<x<<" "<<y<<endl;
  if (x == y)
    return false;
  d[x] = 1; d[y] = -1;
  //cout<<int(3^x^y)<<endl;
  if (count(s.begin(), s.end(), 'A' + x) == s.length() / 2){
    d[3 ^ x ^ y] = -1;
  }
  else
    d[3 ^ x ^ y] = 1;
  int bal = 0;
  for (char c : s) {
    bal += d[c - 'A'];
    if (bal < 0) return false;
  }
  return bal == 0;
}

int main() {
  int t; cin >> t;
  while (t--) {
    cout << (solve() ? "YES\n" : "NO\n");
  }
}