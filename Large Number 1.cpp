#include<bits/stdc++.h>
using namespace std;

void TTM_Subtraction(string a, string b)
{
	while( a.length() < b.length() ) a.insert(0, "0");
	while( b.length() < a.length() ) b.insert(0, "0");
	if( a > b ) swap(a, b);
	
	int mind = 0;
	string kq = "";
	for(int i = b.length()-1; i >= 0; i--){
		a[i] = a[i] - '0';
		b[i] = b[i] - '0';
		if(b[i] < a[i]+mind)
		{
			kq = (char)(b[i]+10-a[i]-mind+'0') + kq;
			mind = 1;
		} else {
			kq = (char)(b[i]-a[i]-mind+'0') + kq;
			mind = 0;
		}
	}
	cout << kq;	
}
int main(){
	int t;
	cin >> t;
	while(t--){
		string a, b;
		cin >> a >> b;
		TTM_Subtraction(a, b);
		cout << endl;
	}
	return 0;
}

