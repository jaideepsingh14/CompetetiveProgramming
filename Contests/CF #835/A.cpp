#include <bits/stdc++.h>
using namespace std;

#define ll long long int

void solve(){
	int a, b, c;
	cin>>a>>b>>c;

	if((a>b&&a<c)||(a>c&&a<b))
		cout<<a<<endl;
	else if((b>a&&b<c)||(b>c&&b<a))
		cout<<b<<endl;
	else
		cout<<c<<endl;
	
}

int main(){
	#ifndef ONLINE_JUDGE
    	freopen("D:/Code/CP/input.txt", "r", stdin);
    	freopen("D:/Code/CP/output.txt", "w", stdout);
	#endif

	int t=1;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}