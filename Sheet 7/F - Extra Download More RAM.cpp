#include<iostream>
#include<algorithm>
using namespace std;

pair<int,int> arr[100];

int main(){
      int t;
      cin >> t;
      for(int ti = 0; ti < t; ti++){
            int n,k;
            cin >> n >> k;
            //{10, 10}
            //{20, 9}
            for(int i = 0; i < n; i++){
                  cin >> arr[i].first;
            }
            for(int i = 0; i < n; i++){
                  cin >> arr[i].second;
            }
            
            sort(arr, arr + n);

            for(int i = 0; i < n; i++){
                  if(arr[i].first <= k){
                        k += arr[i].second;
                  }else{
                              break;
                  }
            }
            cout << k <<'\n';
      }
      return 0;
}