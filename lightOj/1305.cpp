#include<bits/stdc++.h>
using namespace std;
int main(){
	typedef long long ll;
	int T; cin>>T;
	for(int i = 1; i <= T; ++i){
		int Ax,Ay,Bx,By,Cx,Cy,Dx,Dy;  
		cin>>Ax>>Ay>>Bx>>By>>Cx>>Cy;
	    Dx = Ax + Cx - Bx;
	    Dy = Ay + Cy - By;
	    ll A1 = (Ax*By + Bx*Cy + Cx*Dy + Dx*Ay); 
		ll A2 = (Ay*Bx + By*Cx + Cy*Dx + Dy*Ax);
		ll A = abs(A1 - A2);
		A = A/2;
	    printf("Case %d: %d %d %lld\n",i,Dx, Dy,A);
	}
	    return 0;
	}

