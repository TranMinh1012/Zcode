#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		int k;
		cin >> n >> k;
		int count = 0;
		for(int i = 2; i <= n; i++){
			while(n % i == 0){
				count++;
				if(k == count){
					cout << i << endl;
				}
				n /= i;
			}
		}
		if(k > count){
			cout << -1 << endl;
		}
	}
	return 0;
}
