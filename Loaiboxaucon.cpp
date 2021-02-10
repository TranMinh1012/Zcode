#include<bits/stdc++.h>
using namespace std;
#define separator ",. "

int main(){
	char s[100];
	char s1[100];
	cin.get(s, 100);
	fflush(stdin);
	cin >> s1;
	char *p;
	p = strtok(s, separator);
	while(p != NULL){
		int cmp = strcmp(s1, p);
		if(cmp == 0){
			
		} else {
			printf("%s ", p);
		}
		p = strtok(NULL, separator);
	}
	return 0;
}

