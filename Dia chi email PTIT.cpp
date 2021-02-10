#include<bits/stdc++.h>
using namespace std;
#define separator ",. "

void ChuDauThuong( char s[]){
	s[0] = tolower(s[0]);
	cout << s[0];
}
void ThuongTatCa( char s[]){
	for(int i = 0; i < strlen(s); i++){
		s[i] = tolower(s[i]);
	}
}
int main(){
	char s[100];
	cin.get(s, 100);
	char s1[100][100];
	char *p;
	int k = 0;
	p = strtok(s, separator);
	while(p != NULL){
		strcpy(s1[k++], p);
		p = strtok(NULL, separator);
	}
	ThuongTatCa(s1[k-1]);
	cout << s1[k-1];
	for(int i = 0; i < k-1; i++){
		ChuDauThuong(s1[i]);
	}
	cout << "@ptit.edu.vn";
	return 0;
}
