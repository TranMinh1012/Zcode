#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n, sum = 0;
		long long k;
		cin >> n >> k;
		for(int i = 1; i <= n; i++){
			sum += i%k;
		}
		if(sum == k) cout << "1";
		else cout << "0";
		cout << endl;
	}
	return 0;
}
