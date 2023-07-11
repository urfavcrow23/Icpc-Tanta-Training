#include <iostream>
using namespace std;
int main(){
      char myChar;
      cin >>myChar;
      if (myChar >= 97 && myChar <= 122){
            cout << "ALPHA" <<'\n';
            cout << "IS SMALL" <<'\n';
      } else if (myChar >= 65 && myChar <= 90){
            cout << "ALPHA\nIS CAPITAL" <<'\n';
            // cout << "IS CAPITAL" <<'\n';
      } else {
            cout << "IS DIGIT" <<'\n';
      }
      return 0;
}