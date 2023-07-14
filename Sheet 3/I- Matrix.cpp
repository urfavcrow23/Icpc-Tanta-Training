#include <bits/stdc++.h>
using namespace std;

int main(){
      int size;
      cin >> size;
      int arr[size][size];
      for (int i = 0; i < size; i++){
            for(int j = 0; j < size; j++){
                  cin >> arr[i][j];
            }
      }
      int main_d = 0;
      for(int i = 0, j = 0; i < size; i++, j++){
            main_d += arr[i][j];
      }
      int sec_d = 0;
      for(int i = 0, j = size - 1; i < size; i++, j--){
            sec_d += arr[i][j];
      }
      cout << abs(main_d - sec_d) <<endl;

      return 0;
      }