#include <bits/stdc++.h>
using namespace std;

int main(){
      int lines;
      cin >> lines;
      for(int i = 1; i <= lines; i++){
            int nums;
            cin >> nums;
            if(nums == 0)
                  cout << 0;
            while(nums != 0){
                  cout << nums % 10 <<" ";
                  nums /= 10;
            }
            cout <<'\n';
      }
      return 0;
}