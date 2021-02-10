#include<bits/stdc++.h>
using namespace std;

int Fibo(int n)
{
	int f[n+1];
	f[0] = 0;
	f[1] = 1;
	for(int i = 2; i <= n; i++){
		f[i] = (f[i-1] + f[i-2]) % 1000000007;
	}
	return f[n];
}
int main()
{
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		cout << Fibo(n) << endl;
	}
	return 0;
}
