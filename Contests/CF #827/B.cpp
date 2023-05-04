#include <bits/stdc++.h>
using namespace std;

#define ll long long int

void solve(){
	int i, j, n;
	cin>>n;
	vector<int> a(n);
	set<int> s;

	for(i=0; i<n; i++)
		cin>>a[i];

	for(int i=0; i<n; i++){
		if(s.find(a[i])!=s.end()){
			cout<<"NO"<<endl;
			return;
		}
		s.insert(a[i]);
	}

	cout<<"YES"<<endl;

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