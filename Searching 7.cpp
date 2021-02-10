#include<bits/stdc++.h>
using namespace std;

void TTM_TimKPtuLonNhat(int a[], int n, int k)
{
	for(int i = 0; i < n-1; i++){
		for(int j = i+1; j < n; j++){
			if(a[i] < a[j]){
				swap(a[i], a[j]);
			}
		}
	}
/*	vector<int> b;
	for(int i = 0; i < n; i++){
		b.push_back(a[i]);
	}
	b.resize(k);
	for(int i = 0; i < b.size(); i++){
		cout << b[i] << " ";
	} */
	for(int i = 0; i < k; i++) cout << a[i] << " ";
}
int main()
{
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		TTM_TimKPtuLonNhat(a, n, k);
		cout << endl;
	}
	return 0;
}
