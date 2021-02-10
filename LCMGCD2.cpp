#include<iostream>
using namespace std;
typedef long long ll;

ll GCD(ll a, ll b){
	ll temp = 0;
	for(int i=1; i<=a&&i<=b; i++){
		if(a%i==0&&b%i==0){
			temp = i;
		}
	}
	return temp;
}
ll 	LCM(ll a, ll b){
	return(a*b)/GCD(a,b);
}
int main(){
	int n;
	cin>>n;
	ll a;
	while(n--){
		cin>>a;
		ll count = 1;
		for(int i=1; i<=a; i++){
			count = LCM(count, i);
		}
		cout<<count<<endl;
	}
	return 0;
}
