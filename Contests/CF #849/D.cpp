#include <bits/stdc++.h>
using namespace std;

#define ll long long int

void solve(){
	int n;
    string str;
    cin>>n>>str;
    vector<int> prefix(n,0),suffix(n,0);
    set<char> se;
    for(int i=0;i<n;i++){
        se.insert(str[i]);
        prefix[i]=se.size();
    }
    se.clear();
    for(int i=n-1;i>=0;i--){
        se.insert(str[i]);
        suffix[i]=se.size();
    }
    int ans=0,maxo=0;
    for(int i=0;i<n-1;i++){
        ans=prefix[i]+suffix[i+1];
        maxo=max(maxo,ans);
    }
    cout<<maxo<<endl;
	
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