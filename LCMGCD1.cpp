#include<iostream>
using namespace std;
long long GCD(int a, int b) 
{ 
int i; 
while (a%b != 0) 
{
    i = a%b; 
    a = b; 
    b = i; 
} 
return b; 
} 
int main(){
    int n;
    cin >> n;
    long long a, b;
    while(n--){
        cin>>a>>b;
        cout << (a*b)/GCD(a, b) << " " << GCD(a,b) << endl;
    }
    return 0;
}
