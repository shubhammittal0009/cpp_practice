#include <iostream>
#include <math.h>
using namespace std;
int main(){

	long int deci = 0, octal=0, rem=0, r=0;

	cin>>deci;

	while(deci!=0){
		rem = (deci)%8;
		deci /= 8;
		// cout<<rem;
		octal = octal*10 + rem;
	}

	int n = octal;

	while(n!=0){
		r = (10*r) + n%10;
		n /= 10;
	}

	cout<<r<<endl;

	return 0;
}