#include <bits/stdc++.h>
using namespace std;
 
 
int main()
{
    int n;
    cin>>n;
    vector<int> math , prog, eu ;
    for(int i = 1 ; i <= n ; i++){
      int x ; cin >> x ;
      if(x == 1) prog.push_back(i);
      else if(x == 2) math.push_back(i);
      else if( x== 3)eu.push_back(i);
    }
    int ans = min(math.size(),  min(prog.size(),  eu.size()));
    cout<< ans << endl;
    for(int i = 0 ; i < ans ; i ++){
      
      cout<<math[i]<< " "<< prog[i] << " "<< eu[i]<< endl ;
    }
}


//! Solution 2
#include<iostream>
#include<cmath>
#include<string>
using namespace std;


int main()
{
	int n ,gifted,arr[4][5001],count[4]={0},nteam;
 cin>>n;
 for(int id=1 ;id<=n;id++)
 {
	 cin>>gifted;
	 count[gifted]++;
	 arr[gifted][count[gifted]]=id ;
	 

 }
 nteam=min(min(count[1],count[2]),count[3]);
 cout<<nteam<<endl;
 for(int i=1;i<=nteam;i++)
	 cout<<arr[1][i]<<" "<<arr[2][i]<<" "<<arr[3][i]<<endl;

	return 0 ;
}