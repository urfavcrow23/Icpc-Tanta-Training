#include<iostream>
#include<map>
using namespace std;

pair<int,int> arr[100000];

int main(){
      //Fast I/O
      ios_base::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);

      int t;
      cin >> t;
      for(int ti = 0; ti < t; ti++){
            int n;
            cin >> n;
            for(int i = 0; i < n; i++){
                  cin >> arr[i].first >> arr[i].second;
            }
            
            map<int, int> row;
            for(int i = 0; i < n; i++){
                  row[arr[i].first]++;
            }

            long long ans = 0;
            for(int i = 0; i < n; i++){
                  ans += row[arr[i].second];
            }
            cout << ans <<"\n";
      }
      return 0;
}