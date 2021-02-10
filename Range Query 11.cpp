#include<bits/stdc++.h>
using namespace std;

void TTM_NhapMang(int a[], int n)
{
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
}
void TTM_KhoangCachNhoNhat(int a[], int n)
{
	int d = abs(a[0]-a[1]);
	for(int i = 0; i < n-1; i++){
		for(int j = i+1; j < n; j++){
			if( d > abs(a[i]-a[j]) ){
				d = abs(a[i]-a[j]);
			}
		}
	}
	cout << d;
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int a[n];
		TTM_NhapMang(a, n);
		TTM_KhoangCachNhoNhat(a, n);
		cout << endl;
	}
	return 0;
}
