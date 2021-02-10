#include<bits/stdc++.h>
using namespace std;

void TTM_NhiPhanChiaNam(string s)
{
	long long sum_dec = 0;
	long long temp = 1;
	for(long long i = s.length()-1; i >= 0; i--){
		if(s[i] == '1'){
			sum_dec += temp;
		}
		temp = (temp * 2)%10;
	}
	if(sum_dec % 5 == 0){
		cout << "Yes";
	} else {
		cout << "No";
	}
}
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		cin >> s;
		TTM_NhiPhanChiaNam(s);
		cout << endl;
	}
	return 0;
}
