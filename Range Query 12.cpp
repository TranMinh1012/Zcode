#include<bits/stdc++.h>
using namespace std;

int rangeQuery(int a1[], int a2[], int n)
{
	int max = 0;
	for(int i = 0; i < n; i++)
	{
		int s1 = 0, s2 = 0;
		for(int j = i; j < n; j++){
			s1 += a1[j];
			s2 += a2[j];
			if(s1==s2){
				int max1 = j-i+1;
				if(max1 > max) max = max1;
			}
		}
	}
	return max;
}
int main()
{
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a1[n], a2[n];
		for(int i = 0; i < n; i++) cin >> a1[i];
		for(int i = 0; i < n; i++) cin >> a2[i];
		cout << rangeQuery(a1, a2, n);
		cout << endl;
	}
	return 0;
}
