#include<bits/stdc++.h>
using namespace std;

void TTM_TongGanNhat(int a[], int n)
{
	int sum_min = a[0] + a[1];
	for(int i = 0; i < n-1; i++){
		for(int j = i+1; j < n; j++){
			int sum = a[i]+a[j];
			if( abs(sum_min) > abs(sum) ){
				sum_min = sum;
			}
		}
	}
	cout << sum_min;
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
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		TTM_TongGanNhat(a, n);
		cout << endl;
	}
	return 0;
}
