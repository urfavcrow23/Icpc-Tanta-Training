#include<bits/stdc++.h>
using namespace std;
int main(){
      int size;
      cin >> size;
      int arr [size];
      for(int i = 0; i < size; i++)
            cin >> arr[i];
      for(int i =0; i < size/2; i++){
            if(arr[i] != arr [size-i-1]){
                  cout << "NO\n";
                  return 0;
            }
      }
      cout <<"YES\n";
      return 0;
}