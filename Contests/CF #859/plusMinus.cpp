#include <bits/stdc++.h>
using namespace std;

#define ll long long int

void solve(){
	int a, b, c;
	cin>>a>>b>>c;

	if((a+b)==c)
		cout<<"+"<<endl;
	if((a-b)==c)
		cout<<"-"<<endl;
	
}

int main(){
	#ifndef ONLINE_JUDGE
    	freopen("input.txt", "r", stdin);
    	freopen("output.txt", "w", stdout);
	#endif

	int t=1;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}