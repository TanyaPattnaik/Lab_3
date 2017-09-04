#include <iostream>
using namespace std;
int main() {
	char a;
	cout <<"Enter a character\n";
	cin >>a;
	if (a>='a' && a<='z' || a<='A' && a>='Z')
	cout <<a <<" is an alphabet\n";
	else
	cout <<a <<" is not an alphabet\n";
	return 0;
}
