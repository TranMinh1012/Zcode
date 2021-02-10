#include<bits/stdc++.h>
using namespace std;

void TTM_nhapMang(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
}
int main()
{
	int t;
	cin >> t;
	while(t--){
		int n, Q;
		cin >> n >> Q;
		int a[n];
		TTM_nhapMang(a, n);
		int L, R;
		while(Q--){
			cin >> L >> R;
			int sum = 0;
			for(int i = L-1; i < R; i++){
				sum += a[i];
			}
			cout << sum << endl;
		}
	}
	return 0;
}
