#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
		long long n;
		cin>>n;
		vector<long long> a(n);
		vector<long long> b(n);
		for(int i = 0; i < n; i++) {
			cin>>a[i];
		}
		for(int i = 0; i < n; i++) {
			cin>>b[i];
		}
		long long i = 0;
		map<long long,long long> frea;
		while(i < n) {
			long long count = 1;
			while(( i < n-1 ) && ( a[i] == a[i+1]) ) {
				count++;
				i++;
			}
			frea[a[i]] = max(frea[a[i]], count);
			i++;
		}

		long long j = 0;
		map<long long,long long> freb;
		while(j < n) {
			long long count = 1;
			while(( j < n-1 ) && ( b[j] == b[j+1]) ) {
				count++;
				j++;
			}
			freb[b[j]] = max(freb[b[j]], count);
			j++;

		}
		
		stack<long long> st;
		long long ans = 0;

		for(auto p : frea) {
			ans = max(ans, p.second + freb[p.first]);
		}

		for(auto p : freb) {
			ans = max(ans, p.second + frea[p.first]);
		}

		cout << ans << endl;



	}
}