#include<bits/stdc++.h>
using namespace std;

void TTM_CacCapGiaiThua(int n, string a)
{
	string s;
	for(int i = 0; i < n; i++){
		switch (a[i]) {
                case '2':
                    s += "2";
                    break;
                case '3':   
                    s += "3";
                    break;
                case '4':   
                    s += "223";
                    break;
                case '5':  
                    s += "5";
                    break;
                case '6':   
                    s += "35";
                    break;
                case '7':   
                    s += "7";
                    break;
                case '8':	
                    s += "2227";
                    break;
                case '9':	
                    s += "3372";
                    break;
                default :
                    break;
        }
	}
	sort(s.begin(),s.end(),greater<int>());
    cout << s;
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		string a;
		cin >> n;
		cin >> a;
		TTM_CacCapGiaiThua(n, a);
		cout << endl;
	}
	return 0;
}
