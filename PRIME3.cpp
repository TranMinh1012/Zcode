#include<bits/stdc++.h>
using namespace std;

long long SNT(long long n){
	if(n<2){
		return 0;
	} else {
		for(int i = 2; i <= sqrt(n); i++){
			if(n%i==0){
				return 0;
			}
		}
	}
	return 1;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		for(int i=2; i <= n; i++){
			if(SNT(i) == 1){
				cout << i << " ";
			}
		}
		cout << endl;
	}
	return 0;
}
