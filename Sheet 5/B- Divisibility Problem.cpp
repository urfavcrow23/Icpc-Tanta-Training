#include <bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;

while(t--){
	
	int x,y;
	cin>>x>>y;
	
	if(x%y==0) 
	{
	cout<<0<<endl;
	}
	else {
	
	int w=x%y;
	
	cout<<y-w<<endl;
	
	}
}


	return 0;
}


// Solution 2 --> Upsolving Session
# include <iostream>
using namespace std;

int main(){
	//? Brute Force 
	//? 10 4, 11 4, 12 4
	int t;
	cin >> t;
	for(int ti = 0; ti < t; ti++){
		int a, b;
		cin >> a >> b;
		if (a % b == 0){
			cout << 0 << endl;
		}
		else{
			int ans = b - a % b; // O(1)
			cout << ans << endl;
		}
	}
	return 0;
}
