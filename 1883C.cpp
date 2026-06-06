#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
		long long n,k;
		cin>>n>>k;
		vector<long long> a(n);
		for(int i = 0; i < n; i++) {
			cin>>a[i];
		}
		if(k == 4 ) {
			map<int,int> mp;
			for(int i = 0; i < n; i++) {
				mp[a[i]%k]++;
			}
			int c1 = mp[1];
			int c2 = mp[2];
			int c3 = mp[3];
			int c0 = mp[0];

			if(c0 != 0  || c2 > 1) {
				cout<<0<<endl;
			} else if(c3!=0) {
				cout<<1<<endl;
			} else {
				if(c2 == 0) {
					if(c1 == 1) {
						cout<<3<<endl;
					} else {
						cout<<2<<endl;
					}
				} else if(c2 == 1) {
					if(c1 >= 1) {
						cout<<1<<endl;
					} else if(c1 == 0) {
						cout<<2<<endl;
					}
				}
			}



		} else {
			long long ans = k;
			bool zero = false;
			for(int i = 0; i < n; i++) {
				if(a[i]%k == 0) {
					zero = true;
					break;
				}
				ans = min(ans,(k-a[i]%k));
			}
			if(zero) {
				cout<<0<<endl;
			} else {
				cout<<ans<<endl;
			}
		}

	}
}







