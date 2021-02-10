#include<bits/stdc++.h>
using namespace std;

int SNT(int n){
	if(n<2){
		return 0;
	} else {
		for(int i = 2; i <= sqrt(n); i++){
			if(n%i==0){
				return 0;
			}
		}
	}
	return 1;
}
int Max(int a, int b){
	return a>b ? a : b;
}
int Min(int a, int b){
	return a<b ? a : b;
}
int main(){
	int a, b;
	cin >> a >> b;
	for(int i = Min(a, b); i <= Max(a, b); i++){
		if(SNT(i) == 1){
			cout << i << " ";
		}
	}
	return 0;
}
