#include<bits/stdc++.h>
using namespace std;

void TTM_TimSoNhoNhat(int a[], int n)
{
	int value = 1;
	for(int i = 0; i < n; i++){
		if(a[i] == value) value++;
	}
	cout << value;	
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
		TTM_TimSoNhoNhat(a, n);
		cout << endl;
	}
	return 0;
}

