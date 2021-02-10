#include<bits/stdc++.h>
using namespace std;

void TTM_MM(int a[], int n)
{
	sort(a, a+n);
	if(a[0] < a[1])
	{
		cout << a[0] << " " << a[1];
 	} else {
		cout << -1;
	}
}
int main(){
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
		TTM_MM(a, n);
		cout << endl;
	}
	return 0;
}
