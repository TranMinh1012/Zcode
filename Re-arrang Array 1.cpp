#include<bits/stdc++.h>
using namespace std;

void XepLaiMang(long long a[], long long n)
{
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(a[j] == i){
				swap(a[j], a[i]);
				break;
			}
		}
	}
	for(int i = 0; i < n; i++){
		if(a[i] != i){
			a[i] = -1;
		}
	}
	for(int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
	cout << endl;
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long long n;
		cin >> n;
		long long a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		XepLaiMang(a, n);
	}
	return 0;
}
