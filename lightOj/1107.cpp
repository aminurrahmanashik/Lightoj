// lightoj 1107 accepted

#include<bits/stdc++.h>
using namespace std;
int main(){
	int T;   cin>>T;
	for(int t = 1; t <= T; ++t){
		int x1,y1,x2,y2,m;
		cout<<"Case "<<t<<":\n";
		cin>>x1>>y1>>x2>>y2;
		cin>>m;
		for(int i = 1; i <= m; ++i){
			int x,y;  cin>>x>>y;
			if(((x >= x1) && (x <= x2)) && ((y >= y1 && y <= y2) ))
					cout<<"Yes\n";
				else cout<<"No\n";
		}
	}
	return 0;
}


