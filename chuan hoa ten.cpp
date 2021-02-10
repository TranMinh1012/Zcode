#include<bits/stdc++.h>
using namespace std;
#define separator ",. "

void HoaChuDau(char s[]){
	s[0] = toupper(s[0]);
	for(int i = 1; i < strlen(s); i++){
		s[i] = tolower(s[i]);
	}
}
void HoaTatCa(char s[]){
	for(int i = 0; i < strlen(s); i++){
		s[i] = toupper(s[i]);
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
	for(int i = 0; i < k-1; i++){
		HoaChuDau(s1[i]);
	}
	for(int i = 0; i < k-1; i++){
		cout << s1[i];
		if(i< k-2){
			cout << " ";
		} else {
			cout << ",";
		}
	}
	HoaTatCa(s1[k-1]);
	cout << " " << s1[k-1];
	return 0;
}

