#include<bits/stdc++.h>
using namespace std;
int main(){
	int T;
	cin>>T;
      for(int t = 1; t <= T; ++t){
	  unsigned long long int ways = 1,n,k;
		cin>>n>>k;
			for(int i = 1; i <= k; ++i){
				ways *= n*n;
				ways /= i;
				--n;
			}
			cout<<"Case "<<t<<": "<<ways<<"\n";
		}
	return 0;
}
