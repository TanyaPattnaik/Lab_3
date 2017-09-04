#include <iostream>
using namespace std;
int main() 
{
	char a;
	cout <<"Enter a character\n";
	cin >>a;
	if (a>='a'&&a<='z')
	cout <<a <<" is a lowercase alphabet\n";
	else if (a>='A'&&a<='Z')
	cout <<a <<" is an uppercase alphabet\n";
	else
	cout <<"Invalid entry\n";
	return 0;
}
