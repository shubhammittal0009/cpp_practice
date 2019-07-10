#include <iostream>
#include <math.h>
using namespace std;
int main(){

	int n=0;
	cin>>n;
	int a=0,b=0;

	//LOGIC 

	// pythagoras triplets are always:
	// ((m^2 - n^2), (2*m*n), (m^2 + n^2))
	// (odd, even, odd)

	// if n is odd
	// ((n/2)^2 - 1), 2*(N/2)*1, (N/2)^2 + 1)

	// if n is even
	// ( ((((n+1)/2)^2) - ((n-1)/2)^2), 2*((n+1)/2)*((n-1)/2), ((((n+1)/2)^2) + ((n-1)/2)^2) )

	// CODE
	if(n%2==0){

		a = (pow((n/2), 2) - 1);
		b = (pow((n/2), 2) + 1);

	}else{

		a = (2)*(n+1/2)*(n-1/2);
		
		if(n>a){
			b = (pow((n+1/2),2)-pow((n-1/2),2));
		}else{
			b = (pow((n+1/2),2)+pow((n-1/2),2));
		}
	
	}

	cout<<a<<" "<<b<<endl;

	return 0;
}