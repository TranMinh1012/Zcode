#include<bits/stdc++.h>
using namespace std;

void TTM_NhapMaTran(long long a[][100], int k, int n)
{
	for(int i = 0; i < k; i++){
		for(int j = 0; j < n; j++){
			cin >> a[i][j];
		}
	}
}
void TTM_SapXep(long long a[][100], int k, int n)
{
	vector<int> b; // khoi tao vector
	for(int i = 0; i < k; i++){
		for(int j = 0; j < n; j++){
			b.push_back(a[i][j]); // them phan tu vao cuoi vector
		}
	}
	sort(b.begin(), b.end()); // sap xep vector
	for(int i = 0; i < b.size(); i++){
		cout << b[i] << " ";
	}
}
int main()
{
	int t;
	cin >> t;
	while(t--){
		int k, n;
		cin >> k >> n;
		long long a[100][100];
		TTM_NhapMaTran(a, k, n);
		TTM_SapXep(a, k, n);
		cout << endl;
	}
	return 0;
}
