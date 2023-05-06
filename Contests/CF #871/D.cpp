#include <bits/stdc++.h>
using namespace std;

#define ll long long int

bool recur(int n, int &m){
    if(n<m)
    	return false;
    if(n==m)
    	return true;
    
    if(n%3==0){
        return recur(n/3, m) || recur(2*n/3, m);
    }
    return false;
}

void solve() {
  int n, m;
  cin>>n>>m;
  if(recur(n,m))
  	cout<<"YES"<<endl;
  else
  	cout<<"NO"<<endl;
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