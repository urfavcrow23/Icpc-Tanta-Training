#include <iostream>
using namespace std;

int main(){
      int n1, n2, n3;
      cin >> n1 >> n2 >> n3;
      /*
      if (n1 <= n2 && n1 <= n3)
            cout << n1;
      else if (n2 <= n1 && n2 <= n3)
            cout << n2;
      else if (n3 <= n1 && n3 <= n2)
            cout << n3;
      cout << " ";
      if (n1 >= n2 && n1 >= n3)
            cout << n1;
      else if (n2 >= n1 && n2 >= n3)
            cout << n2;
      else if (n3 >= n1 && n3 >= n2)
            cout << n3;
      */
      cout << min(n1, min(n2, n3)) <<" "<< max(n1,max(n2, n3));
      return 0;
}