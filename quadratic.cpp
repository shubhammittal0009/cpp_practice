#include <iostream>
#include <math.h>
using namespace std;
int main(){

	int a,b,c;
	cin>>a>>b>>c;

	int d = 0;
	d = pow(b,2) - (4*a*c);

	d = sqrt(d);

	if(d>0){
		cout<<"Real and Distinct"<<endl;
		int r1=0,r2=0;
		r1 = (-b - d)/(2*a);
		r2 = (-b + d)/(2*a);
		cout<<r1<<" "<<r2;
	}else if(d==0){
		cout<<"Real and Equal"<<endl;
		int r1=0,r2=0;
		r1 = (-b)/(2*a);
		r2 = r1;
		cout<<r1<<" "<<r2;
	}else{
		cout<<"Imaginary";
	}

	return 0;
}