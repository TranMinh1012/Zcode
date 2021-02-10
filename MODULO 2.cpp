#include<bits/stdc++.h>
using namespace std;

void modulo(int a, int m)
{
	int x = 0;
	for(int i = 0; i <= m-1; i++){
		if( (a*i)%m==1 ){
			x = i;
			break;
		}
	}
	if(x > 0)
	{
		cout << x;
	} else {
		cout << "-1";
	}
}
int main()
{
	int t;
	cin >> t;
	while(t--){
		int a, m;
		cin >> a >> m;
		modulo(a, m);
		cout << endl;
	}
	return 0;
}
