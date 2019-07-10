#include <iostream>
#include <math.h>
using namespace std;
int main(){

	long long n=0;
	cin>>n;
	long long a=0,b=0;

	//LOGIC 

	// pythagoras triplets are always:
	// ((m^2 - n^2), (2*m*n), (m^2 + n^2))
	// (odd, even, odd)

	// if n is odd
	// ((n/2)^2 - 1), 2*(N/2)*1, (N/2)^2 + 1)

	// if n is even
	// ( ((((n+1)/2)^2) - ((n-1)/2)^2), 2*((n+1)/2)*((n-1)/2), ((((n+1)/2)^2) + ((n-1)/2)^2) )

	// CODE

	if(n==1){

		cout<<-1<<endl;

	}else{
		if(n%2==0){

			a = (((n*n)/4) - 1);

			b = (((n*n)/4) + 1);

		}else if(n%2!=0){

			a = (((n*n)-1)/2);
			
			b = (((n*n)+1)/2);
		
		}else{

			cout<<-1<<endl;

		}
	}
	
	cout<<a<<" "<<b<<endl;

	return 0;
}