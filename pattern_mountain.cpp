#include <iostream>
#include <math.h>
using namespace std;
int main(){

	int n;
	cin>>n;

	for(int i=1; i<=n; i++){
		
		for(int j=1; j<=i; j++){
			
			cout<<j<<" ";

		}

		for(int k=1; k<=((2*(n-i))-1); k++){

			cout<<"  ";

		}

		for(int l=i; l>=1; l--){

			if(l!=n){
				cout<<l<<" ";
			}

		}

		cout<<endl;
	}

	return 0;
}