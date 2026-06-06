#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
		long long n;
		cin>>n;

		vector<vector<long long>> a(n);
		for(int i = 0 ; i < n; i++) {
			long long m;
			cin>>m;
			a[i].resize(m);
			for(int j = 0; j < m; j++) {
				cin>>a[i][j];
			}
			sort(a[i].begin(),a[i].end());
		}
		vector<long long> first_min;
		vector<long long> second_min;
		for(int i = 0 ; i < n; i++) {
			first_min.push_back(a[i][0]);
			second_min.push_back(a[i][1]);
		}
		long long mn_f = INT_MAX;
		for(int i = 0 ; i < n; i++) {
			if(first_min[i] < mn_f) {
				mn_f = first_min[i];
			}
		}
		long long mn_s = INT_MAX;
		long long sum = 0;
		for(int i = 0 ; i < n; i++) {
			if(second_min[i] < mn_s) {
				mn_s = second_min[i];
			}
			sum+=second_min[i];
		}
		long long ans = sum - mn_s + mn_f;
		cout<<ans<<endl;





	}
}