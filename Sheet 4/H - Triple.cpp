#include <iostream>
#include <algorithm>

using namespace std;

int arr[200000];

int main(){
      int t;
      cin >> t;

      for (int ti = 0; ti < t; ti++){
            int n;
            cin >> n;
            for(int i = 0; i < n; i++){
                  cin >> arr[i];
            }
      sort(arr, arr + n); // O(nlogn)

      int num;
      bool found = false;
      for(int i = 0; i < n - 2; i++){
            if(arr[i] == arr[i + 1] && arr[i] == arr[i + 2]){
                  num = arr[i];
                  found = true;
                  break;
            }
      }
      if (found)
            cout << num << endl;
      else
            cout << -1 << endl;
      
      }
      return 0;
}