#include <bits/stdc++.h>
using namespace std;

#define ll long long int

void solve(){
	int i, j, n;
	cin>>n;
	vector<int> s(n);
	for(i=0;i<n;i++)
		cin>>s[i];

	vector<int> v(s);

	sort(v.begin(), v.end());

	for(i=0;i<n;i++){
		if(s[i]==v[n-1])
			cout<<s[i]-v[n-2]<<" ";
		else
			cout<<s[i]-v[n-1]<<" ";
	}
	cout<<endl;
	
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