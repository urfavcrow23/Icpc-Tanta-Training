#include<iostream>
#include<set>
using namespace std;

int arr[200000];

int main(){
      int t;
      cin >> t;
      for(int ti = 0; ti < t; ti++){
            int n;
            cin >> n;
            for(int i = 0; i < n; i++){
                  cin >> arr[i];
            }
            set<int> s;
            int cnt = 0;
            for(int i = n - 1; i >= 0; i--){
                  //1 5 4 5 7
                  s.insert(arr[i]);
                  cnt++; 
                  if(s.size() != cnt){ 
                        cout << i + 1 << '\n';
                        break;
                  }
            }
            if(s.size() == n){
                  cout << 0 <<'\n';
            }
      }
      return 0;
}