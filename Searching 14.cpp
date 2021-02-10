#include<bits/stdc++.h>
using namespace std;

void TTM_NhapMang(int a[], int n)
{
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
}
void TTM_LapLaiDauTien(int a[], int n)
{
	int b = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < i; j++){
			if(a[j] == a[i]){
				b = a[j];
				break;
			}
		}
		if( b != 0) break;
	}
	if(b != 0){
		cout << b;
	} else {
		cout << -1;
	}
}
int main()
{
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		TTM_NhapMang(a, n);
		TTM_LapLaiDauTien(a, n);
		cout << endl;
	}
}
