#include <bits/stdc++.h>
using namespace std;

int main(){
      int n;
      cin >> n;

      long long sum = ((long long) n * (n + 1)) / 2; // O(1)
      cout << sum << endl;
      return 0;
}