#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n-1];
		for(int i = 0; i < n-1; i++)
		{
			cin >> a[i];
		}
		sort(a, a+n-1);
		if(a[0] != 1){
			cout << 1 << endl;
		}
		int temp = 0;
		for(int i = 0; i < n-2; i++)
		{
			if(a[i+1] - a[i] > 1){ 
				temp = 1;
				cout << a[i]+1 << endl;
				break;
			}
		}
		if(temp == 0) cout << a[n-2]+1 << endl;
	}
	return 0;
}
