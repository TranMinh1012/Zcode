#include<bits/stdc++.h>
using namespace std;

void TTM_NhapMaTran(int a[][100], int n, int m)
{
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> a[i][j];
		}
	}
}
void TTM_ChuyenDoi(int a[][100], int n, int m)
{
	int b[100][100];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			b[i][j] = a[i][j];
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(a[i][j] == 1){
				for(int k = 0; k < n; k++){
					b[k][j] = 1;
				}
				for(int k = 0; k < m; k++){
					b[i][k] = 1;
				}
			}
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cout << b[i][j] << " ";
		}
		cout << endl;
	}
}
int main()
{
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		int a[100][100];
		TTM_NhapMaTran(a, n, m);
		TTM_ChuyenDoi(a, n, m);
		cout << endl;
	}
	return 0;
}
