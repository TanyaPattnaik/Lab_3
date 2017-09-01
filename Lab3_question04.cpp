#include <iostream>
using namespace std;
int main(){
int n;
cout << "Enter a number\n";
cin >> n;
if(n%5==0 && n%11==0)
cout << n <<" is divisible by both 5 and 11\n";
else if(n%5==0)
cout << n <<" is divisible by 5\n";
else if(n%11==0)
cout << n <<" is divisible by 11\n";
else 
cout << n <<" is divisible by neither 5 nor 11\n";
return 0;
}
