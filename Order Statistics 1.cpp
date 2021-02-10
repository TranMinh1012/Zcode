#include<bits/stdc++.h>
using namespace std;

void TTM_PhanTuNhoThuk(int a[], int n, int k)
{
	sort(a, a+n);
	vector<int> b;
	for(int i = 0; i < n; i++){
		b.push_back(a[i]);
	}
	b.resize(k); // thay doi kich thuoc mang
	cout << b[k-1];
}
int main(){
	int t;
	cin >> t;
	while(t--)
	{
		int n, k;
		cin >> n >> k;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		TTM_PhanTuNhoThuk(a, n, k);
		cout << endl;
	}
}
