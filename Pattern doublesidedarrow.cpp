#include <iostream>
#include <math.h>
using namespace std;
int main(){

	int n;
	cin>>n;

	int p=0;

	for(int i=1; i<=n; i++){
		p=i;

		for(int k=1; k<=((2*(n-i))-1); k++){

			cout<<" ";

		}
		
		for(int j=1; j<=i; j++, p++){
			
			cout<<p<<" ";

		}

		for(int l=p-2; l>=i; l--){
			
			cout<<l<<" ";

		}

		cout<<endl;
	}

	return 0;
}