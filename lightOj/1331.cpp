#include<bits/stdc++.h>
using namespace std;
int main(){
	// test case
	int T;  cin>>T;
	for(int i =1; i <= T; ++i){
		double R1,R2,R3,a,b,c,s;
		cin>>R1>>R2>>R3;  // radius
	    a = R1 + R2; b = R2 + R3; c = R1 + R3;
	    s = (a + b + c)/2;

	    double A,B,C;   // angles
	    A = acos((c*c+a*a - b*b)/(2*a*c));
        B = acos((a*a+b*b-c*c)/(2*a*b));
        C = acos((b*b+c*c-a*a)/(2*b*c));
        
	    double Area = sqrt(s*(s - a)*(s - b)*(s - c));
	    // (angle/360)* (180/pi) = (1/2*pi) making  radian to degree 
	    // but for area for sectors =  (pi*r*r) * (1/2*pi) = (r*r/2) or (r*r*0.5)
	    double sector1 =  A * R1 * R1 * 0.5;   
        double sector2 =  B * R2 * R2 * 0.5;
        double sector3 =  C * R3 * R3 * 0.5;
        
       double sector_sum = sector1 + sector2 + sector3;
	    //cout<<endl<<area;
	     //cout<<endl<<area<<" "<<sectors<<endl;
	    double ans = Area - sector_sum;
	    cout<<"Case "<<i<<": "<<fixed<<setprecision(12)<<ans<<endl;
	}
}
