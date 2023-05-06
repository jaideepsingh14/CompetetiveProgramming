#include <bits/stdc++.h>
using namespace std;

#define ll long long int

void solve(){
	string s = "codeforces";
	string c;
	int ans = 0;
	cin>>c;

	for(int i=0; i<10; i++){
		if(c[i]!=s[i])
			ans++;
	}

	cout<<ans<<endl;	
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