#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		int count;
		for(int i = 2; i <= n; i++){
			count = 0;
			while(n % i == 0){
				count++;
				n /= i;
			}
			if(count){
				cout << i; 
			if(count >= 1) cout << " " << count << " ";
			}
		}
		cout << endl;
	}
	return 0;
}
