#include <iostream>
using namespace std;
int main() {
	char a;
	cout <<"Enter an alphabet\n";
	cin >>a;
	if (a=='a' || a=='e' || a=='i' || a=='o' || a=='u')
	cout <<a <<" is an vowel\n";
	else
	cout <<a <<" is a consonant\n";
	return 0;
}
