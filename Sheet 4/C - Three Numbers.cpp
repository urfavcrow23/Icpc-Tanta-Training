#include <bits/stdc++.h>
using namespace std;

int main(){
      int k,s;
      cin >> k >> s;
      int ans = 0;
      // Nested Loop
      for(int x = 0; x <= k; x++){ // O(k)
            for(int y = 0; y <= k; y++){ // O(k)
                  // x, y, s
                  // x + y + z = s
                  // z = s - x - y
                  int z = s - x - y; // O(1)
                  if (x + y + z == s && z >= 0 && z <= k){
                        ans++;
                  }
            }
      }
      // Total time complexity: O(K^2)
      cout << ans << endl;
      return 0;
}