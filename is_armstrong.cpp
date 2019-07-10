#include <iostream>
#include <math.h>
using namespace std;
int main(){

	long n=0, num=0, d=0, sum=0;
	cin>>n;

	num = n;

	while(num!=0){
		d++;
		num /= 10;
	}

	num = n;

	while(num!=0){
		sum += pow((num%10),d);
		num /= 10;
	}

	if(sum==n)
		cout<<"true";
	else
		cout<<"false";


	return 0;
}