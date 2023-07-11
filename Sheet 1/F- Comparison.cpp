#include <iostream>
using namespace std;

int main(){
      short n1,n2;
      char n3;
      cin >> n1 >> n3 >> n2;

      // Code With Switch Case
      /*
      switch (n3)
      {
      case '=':
            {
                  if (n1 == n2)
                        cout << "Right";
                  else
                        cout << "Wrong";
                  break;
            }
      case '<':
            {
                  if(n1 < n2)
                        cout << "Right";
                  else 
                        cout << "Wrong";
                  break;
            }
      
      case '>':
            {
                  if (n1 > n2)
                        cout << "Right";
                  else 
                        cout << "Wrong";
                  break;
            }
      }
      */
      // Code With If
      if (n3 == '=' && n1 == n2 || n3 == '>' && n1 > n2 || n3 == '<' && n1 < n2)
            cout << "Right";
      else 
            cout << "Wrong";
      return 0;
}