#include <bits/stdc++.h>
using namespace std;

#define ll long long int

void solve(){
	int n, ans=INT_MAX, sum1=INT_MAX, sum2=INT_MAX,f1=0, f2=0, res=0;
	cin>>n;
	
	vector<int> m(n);
	string s[n];
	for(int i=0; i<n; i++){
		cin>>m[i];
		cin>>s[i];
	}

	for(int i=0; i<n; i++){
		if(s[i]=="11"){
			f1=1;
			f2=1;
			ans=min(ans,m[i]);
		}

		if(s[i]=="10"){
			f1=1;
			sum1=min(sum1, m[i]);
		}

		if(s[i]=="01"){
			f2=1;
			sum2=min(sum2, m[i]);
		}

	}

	if(sum1==INT_MAX||sum2==INT_MAX)
		sum1=sum2=-1;

	if(f1==1&&f2==1){
		if(sum1>=0&&sum2>=0){
			res=min(ans, (sum1+sum2));
		}
		else
			res= ans;
	}
	else
		res=-1;

	cout<<res<<endl;
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