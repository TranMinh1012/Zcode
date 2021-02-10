#include<bits/stdc++.h>
using namespace std;

void ZeroEnd(long long a[], long long n)
{
	int count = 0;
	for(int i = 0; i < n; i++){
		if(a[i] != 0){
			a[count++] = a[i];
		}
	}
	while(count < n)
	{
		a[count++] = 0;
	}
}
int main()
{
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		long long a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		ZeroEnd(a, n);
		for(int i = 0; i < n; i++){
			cout << a[i] << " ";
		}
		cout << endl;
	}
	return 0;
}
