#include <iostream>
#include <math.h>
using namespace std;
int main(){

	int n=0;
	cin>>n;
	int r=0;

	while(n!=0){
		r = (10*r) + n%10;
		n /= 10;
	}

	cout<<r;

	return 0;
}