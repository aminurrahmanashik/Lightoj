#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  int T; cin>>T;
  for(int i = 1; i <= T; ++i){  // test case loop
  	ll n;
  	cin>>n;
  	ll sqt = ceil(sqrt(n));  
  	ll temp = (sqt*sqt)- n;
  	ll row = 0,col = 0;
  	if(temp < sqt){
  		row = temp + 1;
  		col = sqt;
	  }
	  else {
	  	row = sqt;
	  	col = n - (sqt - 1)*(sqt - 1);
	  }
	   // if the number is even,then change
	  if(sqt % 2 == 0)  swap(row,col);
	    
		cout<<"Case "<<i<<":";
	    cout<<row<<" "<<col<<"\n";
  } 	  
  return 0;
}
