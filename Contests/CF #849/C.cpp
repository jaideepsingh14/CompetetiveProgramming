#include <bits/stdc++.h>
using namespace std;

#define ll long long int

void solve(){
	int i, j, n;
	cin>>n;
	vector<char> s(n);
	for(int a=0; a<n; a++)
		cin>>s[a];
	int a=n;

	for(i=0,j=n-1; i<n/2; i++,j--){
		if(s[i]!=s[j]){
			a-=2;
		}
		if(s[i]==s[j])
			break;
	}

	cout<<a<<endl;
	
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