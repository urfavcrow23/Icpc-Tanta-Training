#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    cin.get();
    set<string> st;
    while(n--){
        string s;
        getline(cin,s);
        st.insert(s);
    }
    cout << st.size() <<'\n';
}