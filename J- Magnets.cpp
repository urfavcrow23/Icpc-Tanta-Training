#include<bits/stdc++.h>
using namespace std;

int arr[100000];

int main()
{
      int size,groups = 1;
      cin >> size;
      for(int i = 0; i < size; i++)
            cin >> arr[i];
      for(int i = 0; i < size - 1; i++){
            if(arr[i] != arr[i + 1])
                  groups++;
      }
      cout << groups << '\n';
      return 0;
}