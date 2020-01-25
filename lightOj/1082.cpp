#include<bits/stdc++.h>
using namespace std;

// typedef long long int ll;
int tree[4*100000+100];
int arr[100100];
const int mx = 1000000000;

void init(int lo,int hi,int pos){
	if(lo == hi){
		tree[pos] = arr[lo];
		return;
	}
	int mid = (lo+hi)/2;
	int left = 2*pos+1;
	int right = 2*pos+2;
	init(lo,mid,left);
	init(mid+1,hi,right);
	tree[pos] = min(tree[left],tree[right]);
}

int query(int lo,int hi,int pos,int i, int j){
  if(i > hi || j < lo)
  return mx;
  if(lo >= i && hi <= j)
  return tree[pos];
  
  int mid = (lo+hi)/2;
  int left = 2*pos+1;
  int right = 2*pos+2;
  return min(query(lo,mid,left,i,j),query(mid+1,hi,right,i,j));
}

int main(){
	
	int T; cin>>T;
	
	for(int t = 1 ; t <= T; ++t){
		int N,q;
		cin>>N>>q;
		
	for(int i = 0; i < N; ++i)
		cin>>arr[i];
    
    init(0,N-1,0);
    cout<<"Case "<<t<<":\n";
	while(q--){
		int start,end;
		cin>>start>>end;
		cout<<query(0,N-1,0,start-1,end-1)<<endl;
	}
}
return 0;
}

