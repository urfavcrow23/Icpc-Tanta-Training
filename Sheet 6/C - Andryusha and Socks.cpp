#include <bits/stdc++.h>
using namespace std;

int main(){
      int sSize;
      cin >> sSize;
      if (sSize == 1){
            int s1,s2;
            cin >> s1 >> s2;
            cout << 1;
            return 0;
      }
      int arr[sSize + 1] = {0};
      int tablepo = 0, counter = 0;
      for (int i = 0; i < sSize * 2; i++){
            int s;
            cin >> s;
            if(arr[s] == 0){
                  arr[s]++;
                  tablepo++;
                  counter = max(tablepo, counter);
            } else{
                  tablepo--;
            }
      }
      cout << counter << endl;
      return 0;
}