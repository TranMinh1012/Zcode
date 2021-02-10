#include<bits/stdc++.h>
using namespace std;

void TTM_SapXepTang(int a[], int n)
{
	sort(a, a+n);
	for(int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
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
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		TTM_SapXepTang(a, n);
		cout << endl;
	}
	return 0;
}
