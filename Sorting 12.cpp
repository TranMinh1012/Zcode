#include<bits/stdc++.h>
using namespace std;

void TTM_TimTich(long long a[], long long b[], int n, int m)
{
	sort(a, a+n);
	sort(b, b+m);
	cout << a[n-1] * b[0];
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n, m;
		cin >> n >> m;
		long long a[n], b[m];
		for(int i = 0; i < n; i++) cin >> a[i];
		for(int i = 0; i < m; i++) cin >> b[i];
		TTM_TimTich(a, b, n, m);
		cout << endl;
	}
	return 0;
}
