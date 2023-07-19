#include<bits/stdc++.h>
using namespace std;
int main()
{
      long int x, y, n, i, t;
      while(cin >> n >> t){
            if(n == 1 && t == 10)
                  cout << "-1\n";
            else if(n >= 2 && t == 10)
            {
                  for(i = 1; i < n; i++){
                        cout << "1";
                  }
                  cout << "0\n";
            }
            else
            {
                  for(i = 1; i <= n; i++){
                        cout << t;
                  }
                  cout << endl;
            }
      }     
      return 0;
}

// Solution 2 --> Upsolving Session 
# include <iostream>
using namespace std;

int main(){
      int n, t;
      cin >> n >> t;

      //  t = 10
      // n = 3, t = 7 700
      // n = 4, t = 10 1000
      // Wrong Answer?
      // Edge Case n = 1, t = 10

      if(t == 10){
            if(n == 1){
                  cout << -1;
            }
            else{
                  cout << t;
                  for(int i = 0; i < n - 2; i++){
                        cout << 0;
                  }
            }
      }
      else{
            for(int i = 0; i < n; i++){
                  cout << t;
            }
      }
      cout << '\n';
      return 0;
}
