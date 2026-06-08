#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
		long long n;
		cin>>n;
		string s;
		cin>>s;



		long long count = 0;

		for(int i = 1; i < n; i++) {
			map<char,int> s1;
			map<char,int> s2;
			for(int j = 0; j < i; j++) {
				s1[s[j]]++;
			}
			for(int k = i; k < n; k++) {
				s2[s[k]]++;
			}
			long long ans = s1.size() + s2.size();
			count = max(count,ans);
		}
		cout<<count<<endl;







	}
}