#include <bits/stdc++.h>
using namespace std;

#define ll long long int

void solve(){
	int n,u=0,r=0;
	cin>>n;
	vector<char> s(n);
	for(int i=0; i<n; i++)
		cin>>s[i];
	for(int i=0; i<n; i++){
		if(s[i]=='U')
			u++;
		if(s[i]=='R')
			r++;
		if(s[i]=='D')
			u--;
		if(s[i]=='L')
			r--;
		if(u==1&&r==1){
			cout<<"YES"<<endl;
			return;
		}
	}
	cout<<"NO"<<endl;
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