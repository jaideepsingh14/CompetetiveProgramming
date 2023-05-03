#include <bits/stdc++.h>
using namespace std;

#define ll long long int

void solve(){
	int n, even=0, odd=0;
	cin>>n;
	vector<int> arr(n);

	for(int i=0; i<n ; i++)
		cin>>arr[i];

	for(int i=0; i<n; i++){
		if(arr[i]%2==0)
			even=even+arr[i];
		else
			odd+=arr[i];
	}
	if(even>odd)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	
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