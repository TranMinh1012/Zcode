#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long long x, y ,p;
		cin >> x >> y >> p;
		long long a = 1;
		for(int i = 1; i <= y; i++){
			a = (a*x)%p; // %p de dam bao a khong vuot qua p trong cac lan lap
		}
		cout << a << endl;
	}
	return 0;
}
