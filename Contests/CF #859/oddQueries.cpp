#include <bits/stdc++.h>
using namespace std;

#define ll long long int

void solve(){
	int i, q, n, sum=0;
	cin>>n>>q;

	vector<int> arr(n);
	for(i=0; i<n; i++)
		cin>>arr[i];

	while(q--){
		int l,r,k;
		cin>>l>>r>>k;

		vector<int> arr1(n,0);
		for(i=0; i<n; i++)
			arr1[i]=arr[i];

		for(i=l-1; i<r; i++)
			arr1[i]=k;

		// for(i=0; i<n; i++)
		// 	cout<<arr[i];

		for(i=0; i<n; i++)
			sum+=arr1[i];

		if(sum%2==0)
			cout<<"NO"<<endl;
		else
			cout<<"YES"<<endl;
	}

	
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