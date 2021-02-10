#include<bits/stdc++.h>
using namespace std;

int SNT(int n){
	if(n < 2) return 0;
	else {
		for(int i = 2; i <= sqrt(n); i++){
			if(n%i==0) return 0;
		}
	}
	return 1;
}
int main()
{
	int t;
	cin >> t;
	while(t--){
		int x;
		cin >> x;
		int count = 0;
		for(int k = 1; k <= x; k++){
			if(__gcd(k,x) == 1) count++;
		}
		if(SNT(count) == 1){
			cout << 1;
		} else {
			cout << 0;
		}
		cout << endl;
	}
	return 0;
}
