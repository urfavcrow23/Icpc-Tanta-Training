#include <bits/stdc++.h>
using namespace std;

int main(){
      int size, key, i;
      cin >> size;
      /* 
      Static Array Like This Doesn't Efficient 
      int nums[size]; 
      Because It allocates memory at compile-time whose size is fixed
      
      */
      int nums[size]; 
      /* Dynamic Allocated Array (Run-Time)
      
      */
      for (i = 0; i < size; i++)
            cin >> nums[i];
      cin >> key;
      for(i = 0; i < size; i++){
            if(nums[i] == key){
                  cout << i <<'\n';
                  break;
            }
      }
      if (i == size)
            cout << -1 << '\n';
      
      return 0;
}