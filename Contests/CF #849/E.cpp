#include <bits/stdc++.h>
using namespace std;

#define ll long long int

void solve(){
	int n;
	cin>>n;
	int a[n];
	int count=0, mini=INT_MAX, sum=0;
	for(int i=0; i<n; i++){
		cin>>a[i];
		if(a[i]<0)
			count++;
		mini=min(mini,abs(a[i]));
		sum+=abs(a[i]);
		cout<<sum<<endl;
	}

	if(count%2==0)
		cout<<sum<<endl;
	else
		cout<<sum-mini-mini<<endl;
	
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