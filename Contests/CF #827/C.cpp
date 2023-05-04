#include <bits/stdc++.h>
using namespace std;

#define ll long long int

void solve() {
	char g[8][8];
	vector<int> r;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			cin >> g[i][j];
			if (g[i][j] == 'R') {
				r.push_back(i);
			}
		}
	}
	for (int i : r) {
	    bool flag = true;
	    for (int j = 0; j < 8; j++) {
	        if (g[i][j] != 'R') {
	        	flag = false; 
	        	break;
	        }
	    }
	    if (flag) {
	    	cout << "R"<<endl; 
	    	return;
	    }
	}
	cout << "B"<<endl;
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