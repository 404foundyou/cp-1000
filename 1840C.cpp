#include <bits/stdc++.h>
using namespace std;
long long  ans(vector<long long> a, long long k){
    long long n = a.size();
    if(n == 0){
        return 0;
    }
    long long x = 0;
    for(long long i = 0; i < n; i++){
        long long y = a[i] - k + 1;
        long long z = (y*(y+1))/2;
        x += z;
    }
    return x;
}
int main() {
	int t;
	cin>>t;
	while(t--) {
		long long n, k, q;
		cin>>n>>k>>q;
		vector<long long> a(n);
		for(int i = 0; i < n; i++) {
			cin>>a[i];
		}
		int count = 0;
		vector<long long> holidays;
		for(int i = 0 ; i < n; i++) {

			while((i < n) && a[i]<=q ) {
				count++;
				i++;
			}
			
			if(count >= k) {
				holidays.push_back(count);
				
				i--;
			}
			count = 0;
		}
		long long t = ans(holidays,k);
		cout<<t<<endl;
		
		
	}
	
	
	
	
	
}