#include <bits/stdc++.h>
using namespace std;

#define ll long long int

void solve(){
	int i, j, n, flag=0;
	cin>>n;

	string s;
	cin>>s;

	vector<int> res(26,-1);

	// for(int j=0; j<res.size(); j++)
	// 	cout<<res[j];
	
	// if(n==1)
	// 	cout<<"YES"<<endl;

	// if(n==2)
	// 	cout<<"NO"<<endl;

	// if(n>3){
		for(i=0; i<n; i++){
			int cur = (s[i] - 'a');
			if(res[cur]==-1)
				res[cur] = i%2;
			else{
				if(res[cur]!=(i%2)){
					cout<<"NO"<<endl;
					return;
				}
			}
		}
		cout<<"YES"<<endl;
	// }

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