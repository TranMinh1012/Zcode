#include<bits/stdc++.h>
using namespace std;

void TTM_String(string s)
{
	int count = s.length();
	for(int i = 0; i < s.length()-1; i++)
	{
		for(int j = i+1; j < s.length(); j++)
		{
			if(s[i]==s[j])
			{
				count++;
			}
		}
	}
	cout << count;
}
int main()
{
	int t;
	cin >> t;
	cin.ignore();
	while(t--)
	{
		string s;
		cin >> s;
		TTM_String(s);
		cout << endl;
	}
}
