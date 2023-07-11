#include <bits/stdc++.h>
using namespace std;

int main(){
      short size;
      cin >> size;
      int nums[size];
      for (int i = 0; i < size; i++)
            cin >> nums[i];
      for (int i = 0; i < size; ++i)
            cout << nums[size-i-1] <<" ";
      return 0;

}