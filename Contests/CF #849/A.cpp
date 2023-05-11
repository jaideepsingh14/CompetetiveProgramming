#include <bits/stdc++.h>
using namespace std;

#define ll long long int

void solve(){
	char ch;
	cin>>ch;

	if(ch=='c'||ch=='o'||ch=='d'||ch=='e'||ch=='f'||ch=='o'||ch=='r'||ch=='s')
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
