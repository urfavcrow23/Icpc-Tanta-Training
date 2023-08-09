#include<bits/stdc++.h>
using namespace std;
int main(){
      int a,m;
      cin >> a >> m;
      set<int> s;
      set<int>::iterator it;
      for(int i = 1; i <= m; i++){
            s.insert(i);
      }
      while(a--){
            int l,r;
            cin >> l >>r;
            for(int i = l; i <= r; i++){
                  s.erase(i);
            }
      }
      cout << s.size() <<'\n';
      for(it = s.begin(); it != s.end(); it++)
            cout<< *it << " ";
}


//! Solution 2

/*
#include <bits/stdc++.h>

using namespace std;

int main() {
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
#endif
	
	int n, m;
	cin >> n >> m;
	vector<int> cnt(m + 2);
	for (int i = 0; i < n; ++i) {
		int l, r;
		cin >> l >> r;
		++cnt[l];
		--cnt[r + 1];
	}
	for (int i = 1; i <= m; ++i)
		cnt[i] += cnt[i - 1];
	
	vector<int> ans;
	for (int i = 1; i <= m; ++i) {
		if (cnt[i] == 0)
			ans.push_back(i);
	}
	
	cout << ans.size() << endl;
	for (auto it : ans) cout << it << " ";
	cout << endl;
	
	return 0;
}
*/