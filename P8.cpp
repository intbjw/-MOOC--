#include<iostream>
#include<cstring>
using namespace std;
int main(){
	char s[50];
	cin >> s;
	int len = strlen(s),flag = 0;
	for(int i = 0; i < len; i++){
		if((s[i] >= '0' && s[i] <= '9') || s[i] == '.'){
			if((s[i + 1] >= '0' && s[i + 1] <= '9') || s[i + 1] == '.')cout << s[i];
			else cout << s[i] << "\n";
		}
		else if(s[i] == '-' || s[i] == '+'){
			if(s[i - 1] >= '0' && s[i - 1] <= '9')cout << s[i] << "\n" ;
			else cout << s[i];
		}
		else cout << s[i] << "\n";
	}
	return 0;
}
