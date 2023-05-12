#include <bits/stdc++.h>
using namespace std;

#define ll long long int

void solve(){
	int n,ans=-1;
	string s;
	cin>>n>>s;

	sort(s.begin(), s.end());

	ans=s[n-1]-'a';

	cout<<ans+1<<endl;

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