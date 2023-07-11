#include <iostream>
using namespace std;

int main(){
      short size;
      cin >> size;
      int numbers[size];
      
      for(int i = 0; i < size; i++)
            cin >> numbers[i];
      
      int maximum = numbers[0];
      for(int i = 1; i < size; ++i)
            if (maximum < numbers[i])
                  maximum = numbers[i];
      
      cout << maximum <<'\n';
            return 0;
}