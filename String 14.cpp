#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string S;
		getline(cin, S);
		stringstream s(S); // dung de tach tu
		string word; // dung de luu tru cac tu rieng le
		int i = 0;
		while(s >> word){
			i++;
		}
		cout << i << endl;
	}
	return 0;
}
