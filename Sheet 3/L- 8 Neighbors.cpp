# include <bits/stdc++.h>
using namespace std;

char arr[100][100];

int main(){
      int n, m;
      cin >> n >> m;
      for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                  cin >> arr[i][j];
            }
      }
      int x,y;
      cin >> x >> y;

      // convert to 0 indexed
      x--;
      y--;

      bool flag = true;

      // check all neighboring cells
      // 0 0
      // 0 - 1  0 - 1 = -1 -1 arr[-1][-1]

      // bounds checking
      // arr[idx]; arr -> 50

      // short circuit

      // X AND 0 = 0
      // 0 AND 1 = 0
      // 0 AND 0 = 0

      for (int curr_x = x - 1; curr_x <= x + 1; curr_x++){
            for (int curr_y = y - 1; curr_y <= y + 1; curr_y++){
                  // All 9 possible combinations
                  if (curr_x == x && curr_y == y){
                        continue;
                  }
                  // cout << curr_x << "," << curr_y << endl;
                  if (curr_x >= 0 && curr_x < n && curr_y >= 0 && curr_y < m && arr[curr_x][curr_y] != 'x')
                        flag = false;
            }
      }
/*
! Nested If

if(x -1 >= 0 && y - 1 >= 0 && arr[x - 1][y - 1] != 'x')
      flag = false;
if(x -1 >= 0 && arr[x - 1][y] != 'x')
      flag = false;
if(x -1 >= 0 && y + 1 < m && arr[x - 1][y + 1] != 'x')
      flag = false;
if(y - 1 >= 0 && arr[x][y - 1] != 'x')
      flag = false;
if(x + 1 < n && y - 1 >= 0 && arr[x + 1][y - 1] != 'x')
      flag = false;
if(arr[x + 1][y] != 'x')
      flag = false;
if(arr[x + 1][y + 1] != 'x')
      flag = false;
*/
      // print answer
      if (flag)
            cout <<"yes\n";
      else
            cout <<"no\n";
      return 0;
}