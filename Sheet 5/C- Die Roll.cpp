//! Solution 1
/*
#include <bits/stdc++.h>
using namespace std;
int main(){
      int a,b;
      cin>>a>>b;
      if(a < b){
            swap(a,b);
      }
      int c = 0;
      for(int i=a; i<=6; i++){
            c++;
      }
      int dot = c/6;
      if(dot == 1){
            cout<<"1/1"<<endl;
      }
      else{
            if(c == 0){
                  cout<<"0/1"<<endl;
            }
            else if(c == 1){
                  cout<<"1/6"<<endl;
            }
            else if(c == 2){
                  cout<<"1/3"<<endl;
            }
            else if(c == 3){
                  cout<<"1/2"<<endl;
            }
            else if(c == 4){
                  cout<<"2/3"<<endl;
            }
            else if(c == 5){
                  cout<<"5/6"<<endl;
            }
      }
      return 0;
}
*/

//! Solution 2

#include <bits/stdc++.h>
using namespace std;
int main(){
      int n1, n2;
      cin >> n1 >> n2;
      string pro[6] = {"1/1","5/6","2/3","1/2", "1/3","1/6"}; //? Convert
      int val = max(n1, n2);
      cout << pro[val - 1] << endl;
      
      return 0;
}

//? Solution 3
#include<iostream>
#include<cmath>
#include<string>
using namespace std;
 
 
int main()
{
	int x,y;
	string die_roll[6]={"1/6","1/3","1/2","2/3","5/6","1/1"};
	cin>>x>>y;
	x=max(x,y);
 
	cout << die_roll[6-x];
 
	return 0 ;
}