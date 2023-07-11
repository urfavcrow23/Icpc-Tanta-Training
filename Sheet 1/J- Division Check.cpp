#include <iostream>
using namespace std;

int main(){
      int num1, num2;
      cin >> num1 >>num2;
      
      if (num1%num2 == 0)
            cout << "divisible\n"<< (float)num1 / num2; 
      else
            cout << "not divisible\n"<< (float)num1 / num2;

      return 0; 
}

