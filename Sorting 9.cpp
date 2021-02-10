#include<bits/stdc++.h>
using namespace std;

void TTM_NhapMang(int a[], int n)
{
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
}
void TTM_DemCap(int a[], int n, int k)
{
	int count = 0;
	for(int i = 0; i < n-1; i++){
		for(int j = i+1; j < n; j++){
			if( (a[i]+a[j]) == k) count++;
		}
	}
	cout << count;
}
int main()
{
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int a[n];
		TTM_NhapMang(a, n);
		TTM_DemCap(a, n, k);
		cout << endl;
	}
	return 0;
}
