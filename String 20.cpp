#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	cin.ignore();
	while(t--)
	{
		string s;
		getline(cin, s);
		vector<string> a;
		char *b = new char[s.length()+1];
		char *p;
		strcpy(b, s.c_str()); // chuyen tu string sang C
		p = strtok(b, " ");
		while(p != NULL)
		{
			a.push_back(p);
			p = strtok(NULL, " ");
		}
		for(int i = a.size()-1; i >= 0; i--)
		{
			cout << a[i] << " ";
		}
		cout << endl;
	}
	return 0;
}
