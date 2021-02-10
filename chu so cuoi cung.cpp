#include<bits/stdc++.h>
using namespace std;
int n;
void TTM_TinhTongRutGon()
{
	int sum = 0;
	while(n>0)
	{
		sum += n%10;
		n /= 10;
	}
	n = sum;
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		cin >> n;
		while(n > 9)
		{
			TTM_TinhTongRutGon();
		}
		cout << n << endl;
	}
	return 0;
}
