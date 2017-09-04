#include <iostream>
using namespace std;
int main() {
	char a;
	cout <<"Enter a character\n";
	cin >>a;
	if (a>='a'&& a<='z'&& a>='A'&& a<='Z')
	cout <<"The character is an alphabet\n";
	else if(a>='0' && a<='9')
	cout <<"The character is a digit\n";
	else
        cout <<"The character is a special character\n";
        return 0;
}
