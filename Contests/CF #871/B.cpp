#include <bits/stdc++.h>
using namespace std;

#define ll long long int

void solve(){
	int n,c=0, ans=0;
	cin>>n;

	vector<int> arr(n);
	for(int i=0; i<n; i++)
		cin>>arr[i];

	for(int i=0; i<n; i++){
		if(arr[i]==1){
			c=0;
		}
		if(arr[i]==0){
			c++;
			ans =max(ans,c);
		}
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