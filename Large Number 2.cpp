#include<bits/stdc++.h>
using namespace std;

void TTM_Sum(string a, string b)
{
	while( a.length() < b.length() ) a.insert(0, "0");
	while( b.length() < a.length() ) b.insert(0, "0");
	
	int mind = 0;
	string kq = "";
	for(int i = b.length()-1; i >= 0; i--){
		a[i] = a[i] - '0';
		b[i] = b[i] - '0';
		if(a[i]+b[i]+mind >= 10){
			kq = (char)(a[i]+b[i]+mind-10+'0') + kq;
			mind = 1;
		} else {
			kq = (char)(a[i]+b[i]+mind+'0') + kq;
			mind = 0;
		}
	}
	if(mind==1) kq.insert(0, "1");
	cout << kq;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		string a, b;
		cin >> a >> b;
		TTM_Sum(a, b);
		cout << endl;
	}
	return 0;
}
