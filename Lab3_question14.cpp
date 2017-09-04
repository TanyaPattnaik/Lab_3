#include <iostream>
using namespace std;
int main() {
	double a1,a2,a3,sum;
	cout <<"Enter the angles of a triangle\n";
	cin >>a1>>a2>>a3;
	sum = a1+a2+a3;
	if (sum==180)
	cout <<"The given angles form a triangle\n";
	else
	cout <<"The given angles do not form a triangle\n";
	return 0;
}
