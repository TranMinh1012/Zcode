#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
	//	int n = s.length();
		int TC = 0; int TL = 0;
		for(int i = 0; i < s.length(); i++){
			if(i%2==0){
				TC += s[i]-'0';
			} else {
				TL += s[i]-'0';
			}
		}
		if(abs(TC-TL) % 11 == 0){
			cout << 1;
		} else {
			cout << 0;
		}
		cout << endl;
	}
	return 0;
}
