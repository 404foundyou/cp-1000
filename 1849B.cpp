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

		vector<long long> second_last;
		for(int i = 0; i < n; i++) {
			long long rem = a[i]%k;
			if (rem == 0) rem = k;
			second_last.push_back(rem);
		}
		
		
		vector<pair<long long, int>> v;

		for(int i = 0; i < n; i++) {
			v.push_back({second_last[i], i + 1}); 
		}

		sort(v.begin(), v.end(), [](auto &p1, auto &p2) {
			if(p1.first != p2.first)
				return p1.first > p2.first;  
			return p1.second < p2.second;    
		});

		for(auto &p : v) {
			cout << p.second << " ";
		}
		cout<<endl;



	}
}