#include<bits/stdc++.h>
using namespace std;

void TTM_NhapMaTran(int a[][100], int n)
{
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> a[i][j];
		}
	}
}
void TTM_MaTranRan(int a[][100], int n)
{
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(i % 2 == 0){
				cout << a[i][j] << " ";
			} else {
				cout << a[i][n-j-1] << " ";
			}
		}
	}
}
int main()
{
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[100][100];
		TTM_NhapMaTran(a, n);
		TTM_MaTranRan(a, n);
		cout << endl;
	}
}
