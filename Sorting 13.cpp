#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		long long a[n], b[m], c[n+m];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		for(int i = 0; i < m; i++){
			cin >> b[i];
		}
		for(int i = 0; i < n; i++){
			c[i] = a[i];
		}
		int j = 0;
		for(int i = n; i < n+m; i++){
			c[i] = b[j];
			j++;
		}
		sort(c,c+(n+m));
		for(int i = 0; i < n+m; i++){
			cout << c[i] << " ";
		}
		cout << endl;
	}
	return 0;
}
