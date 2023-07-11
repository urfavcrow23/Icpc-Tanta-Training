#include <iostream>
using namespace std;

int main(){
      int a, b, c, d;
      char s1, s2;
      cin >> a >> s1 >> b >> s2 >> c;

      if (s1 == '+')
            d = a + b;
      else if (s1 == '-')
            d = a - b;
      else if (s1 == '*')
            d = a * b;
      if(c == d)
            cout <<"Yes";
      else
            cout <<d;
      return 0;
}