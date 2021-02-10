#include<bits/stdc++.h>
using namespace std;

void TTM_Pangram(string s, int k)
{
	
	int a[26]={0},A[26]={0}; // mang danh dau
		for (int i=0;i<s.length();i++){
			if (s[i]>='a'&&s[i]<='z'){
				a[s[i]-'a']++;
			}
			else A[s[i]-'A']++;
		}
		int count1=0,count2=0;
		for (int i=0;i<26;i++){
			if(a[i]>0) count1++;
			if (A[i]>0) count2++;
		}
		if (max(count1,count2)+k>=26) cout<<"1";
		else cout<<"0";
}
int main()
{
	int t;
	cin >> t;
	cin.ignore();
	while(t--)
	{
		string s;
		int k;
		cin >> s;
		cin >> k;
		TTM_Pangram(s, k);
		cout << endl;
	}
	return 0;
}
