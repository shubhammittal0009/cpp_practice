#include <iostream>
#include <math.h>
using namespace std;
int main(){

	int binary=0, deci=0;
	cin>>binary;

	int temp = 0;
	while(binary!=0){
		deci += (binary%10)*(pow(2,temp));
		binary /= 10;
		temp++;
	}
	cout<<deci<<endl;

		
	return 0;
}