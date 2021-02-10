#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		char s[100];
		cin >> s;
		if( (s[strlen(s)-1] == '6') && (s[strlen(s)-2] == '8') ){
			cout << 1;
		} else {
			cout << 0;
		}
		cout << endl;
	}
	return 0;
}
