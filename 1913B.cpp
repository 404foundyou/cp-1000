#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
		string s;
		cin>>s;
		int n = s.size();
		long long zc = 0;
		long long oc = 0;
		for(int i = 0; i < n; i++) {
			if(s[i] == '0') {
				zc++;
			} else {
				oc++;
			}
		}
		int i = n-1;
		int count = 0;
		long long ans = 0;
		if(zc >= oc) {
			while(count < (zc-oc)) {
				if(s[i] == '0') {
					count++;
				}
				i--;
				ans++;
				
			}

		}else{
		    while(count < (oc-zc)) {
				if(s[i] == '1') {
					count++;
				}
				i--;
				ans++;
			}
		}
		cout<<ans<<endl;
	}
}