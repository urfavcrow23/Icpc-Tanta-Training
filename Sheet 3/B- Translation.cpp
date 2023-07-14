#include <bits/stdc++.h>
using namespace std;

int main(){
      string s,a;
      cin >> s;
      cin >> a;
      reverse(s.begin(), s.end());
      if(s == a){
            cout <<"YES\n";
      }
      else{
            cout << "NO\n";
      }
      return 0;
}