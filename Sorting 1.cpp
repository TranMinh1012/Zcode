#include<bits/stdc++.h>
using namespace std;

void TTM_SapXepMang(int a[], int n)
{
	sort(a, a+n);
	vector<int> b;
	for(int i = 0; i < n; i++)
	{
		b.push_back(a[i]);
	}
	vector<int> c;
	for(int i = 0; i < (b.size())/2; i++)
	{
		c.push_back(b[b.size()-1-i]);
		c.push_back(b[i]);
	}
	for(int i = 0; i < c.size(); i++){
		cout << c[i] << " ";
	}
	if(b.size() % 2 != 0) cout << b[b.size()/2];
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
		TTM_SapXepMang(a, n);
		cout << endl;
	}
	return 0;
}
