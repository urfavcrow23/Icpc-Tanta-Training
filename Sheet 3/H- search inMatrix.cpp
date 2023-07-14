#include <bits/stdc++.h>
using namespace std;

int main(){
      int r,c;
      cin >> r >> c;
      int arr[r][c];
      for (int i = 0; i < r; i++){
            for (int j = 0 ; j < c; j++){
                  cin >> arr[i][j];
            }
      }
      int x;
      cin >> x;
      for (int i =0 ; i < r; i++){
            for (int j = 0; j < c; j++){
                  if(arr[i][j] == x){
                        cout << "will not take number\n";
                        return 0;
                  }
            }
      }
      cout << "will take number\n";
      return 0;
}