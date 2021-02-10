#include<bits/stdc++.h>
using namespace std;

void TTM_TimMin(int m, int s)
{
	string min="1";
	for (int i=0;i<m-1;i++){
		min+="0";
	}
    int temp1 = s-1;
    int i = m-1;
    while(temp1) {
        if(temp1>9) {
            min[i--] = '9';
            temp1 -= 9;
        }
        else {
            min[i] = char(min[i] + temp1); 
            temp1 = 0;
        }
    }
	cout << min << " "; 
}
void TTM_TimMax(int m, int s)
{
	string max;
 	for (int i=0;i<m;i++){
		max+="0";
	}
   	int temp2 = s;
    int j=0;
    while (temp2){
	    if(temp2 > 9) {
	        max[j] = '9';
	        temp2 -= 9;
	        j++;
	    }
	    else {
	        max[j] = temp2 +'0';
	        temp2 = 0;
		}
	}
	cout << max << endl;
}
int main()
{
	int m, s;
	cin >> m >> s;
	if(s > m*10-m||s==0) {
        cout << "-1 -1"<<endl;
        return 0;
    }
    TTM_TimMin(m,s);
    TTM_TimMax(m,s);
    return 0;
}
