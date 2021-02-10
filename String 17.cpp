#include<bits/stdc++.h>
using namespace std;

void TTM_String(string s)
{
	int count[100] = {0}; // mang danh dau
	for(int i = 0; i < s.length(); i++){
		count[s[i]]++;
	}
	for(int i = 0; i < s.length(); i++){
		if(count[s[i]]==1) cout << s[i];
	}
}
int main()
{
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		cin >> s;
		TTM_String(s);
		cout << endl;
	}
	return 0;
}
