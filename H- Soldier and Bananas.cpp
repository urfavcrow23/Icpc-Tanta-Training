#include<bits/stdc++.h>
using namespace std;
int main(){
      int cost, dollars, bannum,sum = 0;
      cin >> cost >> dollars >> bannum;
      for (int i = 1; i <= bannum; i++)
            sum += (i*cost); //? 1 * 3 + 2 * 3 + 3 * 3 + 4 * 3
      if(dollars >= sum)
            cout << 0 << '\n';
      else 
            cout << sum - dollars <<'\n';
      return 0;
}